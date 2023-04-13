#include "BitcoinExchange.hpp"

btc::btc(std::string name)
{
    file = name;
}

btc::~btc()
{

}

btc::btc(const btc& b)
{
    *this = b;
}

btc& btc::operator=(const btc& b)
{
    this->file = b.file;
    this->data = b.data;
    this->in_date = b.in_date;
    this->in_num = b.in_num;
    return(*this);
}

void btc::insert_values(std::string str, float val)
{
    data.insert(make_pair(str, val));
}

void btc::parse_data()
{
    std::fstream infile;
    std::string d = "data.csv";
    std::string s;
    infile.open(d, std::ios::in);
    while(getline(infile, s))
    {
        if (s.compare("date,exchange_rate") != 0)
        {
            size_t p = s.find(',');
            std::string date = s.substr(0, p);
            float value = atof(s.substr(p + 1).c_str());
            insert_values(date, value);
        }
    }
    infile.close();
}

int btc::check(std::string s)
{
    int i = 0;
    while (s[i] != ' ')
        i++;
    if (s[i] == ' ' && s[i + 1] == '|' && s[i + 2] == ' ' && s[i + 3] != ' ' && s[i + 3] != '|')
        return(1);
    else
        return(0);
}

void btc::fill(std::string s)
{
    if (in_date.size() > 0)
        in_date.clear();
    if (in_num.size() > 0)
        in_num.clear();
    int i = 0;
    while (s[i] != ' ')
    {
        in_date += s[i];
        i++;
    }
    i += 3;
    while (s[i])
    {
        in_num += s[i];
        i++;
    }
}

int btc::check_date()
{
    std::string valid = "0123456789-";
    int a = count(in_date.begin(), in_date.end(), '-');
    if (a != 2)
        return(0);
    std::string s;
    a = 0;
    for(size_t b = 0; b < in_date.size(); b++)
    {
        if(valid.find(in_date[b]) == std::string::npos)
            return(0);
    }
    a = 0;
    while (in_date[a] != '-')
    {
        s += in_date[a];
        a++;
    }
    a++;
    if(s.size() != 4)
        return(0);
    if(!isdigit(s[0]) || !isdigit(s[1]) || !isdigit(s[2]) || !isdigit(s[3]))
        return(0);
    if (stoi(s) > 2023 || stoi(s) < 2000)
        return(0);
    s.clear();
    while(in_date[a] != '-')
    {
        s += in_date[a];
        a++;
    }
    a++;
    if(!isdigit(s[0]) || !isdigit(s[1]))
        return(0);
    if (stoi(s) > 12 || stoi(s) < 1 || s.size() != 2)
        return(0);
    s.clear();
    while(in_date[a])
    {
        s += in_date[a];
        a++;
    }
    if(!isdigit(s[0]) || !isdigit(s[1]))
        return(0);
    if (stoi(s) < 1 || stoi(s) > 31 || s.size() != 2)
        return(0);
    return(1);
}

int btc::check_num()
{
    if (in_num.size() > 4)
    {
        std::cout << "Error: too large number => " << in_num << std::endl;
        return(0);
    }
    if (stoi(in_num) < 0)
    {
        std::cout << "Error: not a positive number => " << in_num << std::endl;
        return(0);
    }
    if (stoi(in_num) > 1000)
    {
        std::cout << "Error: too large number => " << in_num << std::endl;
        return(0);
    }
    return(1);
}

void btc::print_values()
{
    std::fstream infile;
    std::string s;
    parse_data();
    infile.open(file, std::ios::in);
    if(infile.fail())
    {
        std::cout << "Error: could not open file." << std::endl;
        return;
    }
    while(getline(infile, s))
    {
        if (s.empty())
            continue;
        if (check(s) == 0)
        {
            std::cout << "Error: Bad input => " << s << std::endl;
            continue;
        }
        fill(s);
        if (!check_date())
        {
            std::cout << "Error: Bad input => " << in_date << std::endl;
            continue;
        }
        if (!check_num())
            continue;
        std::cout << in_date << " => " << in_num << " = " << atof(in_num.c_str()) * (data.lower_bound(in_date))->second << std::endl;
        s.clear();
    }
}
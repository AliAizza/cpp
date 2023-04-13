#include "RPN.hpp"

rpn::rpn(std::string str)
{
    input = str;
    numbers = "0123456789";
    operators = "+-/*";
    n = 0;
    o = 0;
    for (size_t i = 0; i < str.size(); i++)
    {
        if (str[i] == ' ')
            continue;
        if (numbers.find(str[i]) == std::string::npos && operators.find(str[i]) == std::string::npos)
        {
            std::cout << "Invalid character." << std::endl;
            exit(0);
        }
    }
    for (char c = '0'; c <= '9'; c++)
        n += count(str.begin(), str.end(), c);
    o += count(str.begin(), str.end(), '+');
    o += count(str.begin(), str.end(), '-');
    o += count(str.begin(), str.end(), '/');
    o += count(str.begin(), str.end(), '*');
    if (n <= o)
    {
        std::cout << "Bad input." << std::endl;
        exit(0);
    }
}

rpn::~rpn()
{

}

rpn::rpn(const rpn& r)
{
    *this = r;
}

rpn& rpn::operator=(const rpn& r)
{
    this->input = r.input;
    this->c = r.c;
    this->numbers = r.numbers;
    this->operators = r.operators;
    this->oper = r.oper;
    this->n = r.n;
    this->o = r.o;
    return(*this);
}

void rpn::aaa(int val)
{
    if (oper == "+")
        c.top() += val;
    else if (oper == "-")
        c.top() -= val;
    else if (oper == "/")
        c.top() /= val;
    else if (oper == "*")
        c.top() *= val;
}

void rpn::print_value()
{
    for(size_t i = 0; i < input.size(); i++)
    {
        if (isdigit(input[i]))
            c.push(input[i] - '0');
        else if (operators.find(input[i]) != std::string::npos)
        {
            if (c.size() < 2)
            {
                std::cout << "Bad input." << std::endl;
                exit(0);
            }
            int v = c.top();
            c.pop();
            if (input[i] == '/' && v == 0)
            {
                std::cout << "Invalid operation => '" << c.top() <<" / 0'" << std::endl;
                exit(0);
            }
            oper = input[i];
            aaa(v);
        }
    }
    if (c.size() == 1)
        std::cout << c.top() << std::endl;
    else
        std::cout << "Bad input." << std::endl;
}
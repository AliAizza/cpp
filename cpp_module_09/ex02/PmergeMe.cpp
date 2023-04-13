#include "PmergeMe.hpp"

pm::pm(char **argv)
{
    int i = 1;

    while (argv[i])
    {
        if (!check(argv[i]))
        {
            std::cout << "Not a valid number => " << argv[i] << std::endl;
            exit(0);
        }
        // if (std::count(vec.begin(), vec.end(), atoi(argv[i])))
        // {
        //     std::cout << "Duplicated number => " << argv[i] << std::endl;
        //     exit(0);
        // }
        vec.push_back(atoi(argv[i]));
        deq.push_back(atoi(argv[i]));
        tmp.push_back(atoi(argv[i]));
        i++;
    }
}

int pm::check(char *str)
{
    int i = 0;
    int z = 0;

    if (str[i] == '+' && strlen(str) > 1)
        i++;
    else if (strlen(str) == 2 && str[i] == '-' && str[i + 1] == '0')
        return(1);
    else if (strlen(str) > 2 && str[i] == '-' && str[i + 1] == '0')
    {
        z++;
        i++;
    }
    while (str[i])
    {
        if (!isdigit(str[i]))
            return(0);
        i++;
    }
    if (atoi(str + 1) != 0 && z == 1)
        return(0);
    return(1);
}


pm::~pm()
{

}

pm::pm(const pm& p)
{
    *this = p;
}

pm& pm::operator=(const pm& p)
{
    this->deq = p.deq;
    this->vec = p.vec;
    this->tmp = p.tmp;
    return(*this);
}

void pm::deq_ins_sort(std::deque<int> &d)
{
    int size = d.size();
    for (int i = 1; i < size; i++)
    {
        int x = d[i];
        int j = i - 1;
        while(j >= 0 && d[j] > x)
        {
            d[j + 1] = d[j];
            j--;
        }
        d[j + 1] = x;
    }
}

void pm::deq_merge_sort(std::deque<int> &d)
{
    std::deque<int> a;
    std::deque<int> b;
    size_t size = d.size() / 2;
    size_t i = 0;
    if (d.size() > 8)
    {
        while(i < size)
        {
            a.push_back(d[i]);
            i++;
        }
        while(i < d.size())
        {
            b.push_back(d[i]);
            i++;
        }
        deq_merge_sort(a);
        deq_merge_sort(b);
        d.clear();
        deq_merge(a, b, d);
    }
    else
        deq_ins_sort(d);
}

void pm::deq_merge(std::deque<int> &left, std::deque<int> &right, std::deque<int> &d)
{
    while(!left.empty() && !right.empty())
    {
        if (left.front() < right.front())
        {
            d.push_back(left.front());
            left.pop_front();
        }
        else
        {
            d.push_back(right.front());
            right.pop_front();
        }
    }
    while(!left.empty())
    {
        d.push_back(left.front());
        left.pop_front();
    }
    while(!right.empty())
    {
        d.push_back(right.front());
        right.pop_front();
    }
}

void pm::vec_ins_sort(std::vector<int> &d)
{
    int size = d.size();
    for (int i = 1; i < size; i++)
    {
        int x = d[i];
        int j = i - 1;
        while(j >= 0 && d[j] > x)
        {
            d[j + 1] = d[j];
            j--;
        }
        d[j + 1] = x;
    }
}

void pm::vec_merge_sort(std::vector<int> &d)
{
    std::vector<int> a;
    std::vector<int> b;
    size_t size = d.size() / 2;
    size_t i = 0;
    if (d.size() > 8)
    {
        while(i < size)
        {
            a.push_back(d[i]);
            i++;
        }
        while(i < d.size())
        {
            b.push_back(d[i]);
            i++;
        }
        vec_merge_sort(a);
        vec_merge_sort(b);
        d.clear();
        vec_merge(a, b, d);
    }
    else
        vec_ins_sort(d);
}

void pm::vec_merge(std::vector<int> &left, std::vector<int> &right, std::vector<int> &d)
{
    while(!left.empty() && !right.empty())
    {
        if (left.front() < right.front())
        {
            d.push_back(left.front());
            left.erase(left.begin());
        }
        else
        {
            d.push_back(right.front());
            right.erase(right.begin());
        }
    }
    while(!left.empty())
    {
        d.push_back(left.front());
        left.erase(left.begin());
    }
    while(!right.empty())
    {
        d.push_back(right.front());
        right.erase(right.begin());
    }
}

void pm::print()
{   
    std::cout << "Before:   ";
    for(size_t i = 0; i < deq.size(); i++)
        std::cout << deq[i] << ' ';
    std::cout << std::endl;
    vec_merge_sort(tmp);
    std::cout << "After:    ";
    for(size_t i = 0; i < tmp.size(); i++)
        std::cout << tmp[i] << ' ';
    std::cout << std::endl;
    
    const clock_t vec_begin = clock();
    vec_merge_sort(vec);
    std::cout << "Time to process a range of " << vec.size() << " elements with vector: " << float(clock() - vec_begin) << " us" << std::endl;
    
    
    
    const clock_t deq_begin = clock();
    deq_merge_sort(deq);
    std::cout << "Time to process a range of " << deq.size() << " elements with deque: " << float(clock() - deq_begin) << " us" << std::endl;
    
}
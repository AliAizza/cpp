#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <ctime>

class pm
{
    private:
        std::vector<int> vec;
        std::deque<int> deq;
        std::vector<int> tmp;
    public:
        pm(char **argv);
        ~pm();
        pm(const pm& p);
        pm& operator=(const pm& p);
        int check(char *str);
        void print();
        void deq_merge_sort(std::deque<int> &d);
        void vec_merge_sort(std::vector<int> &v);
        void deq_ins_sort(std::deque<int> &d);
        void vec_ins_sort(std::vector<int> &v);
        void deq_merge(std::deque<int> &left, std::deque<int> &right, std::deque<int> &r);
        void vec_merge(std::vector<int> &left, std::vector<int> &right, std::vector<int> &r);
};


#endif
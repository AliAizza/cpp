#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <fstream>

class rpn
{
    private:
        std::string input;
        std::stack <int> c;
        std::string numbers;
        std::string operators;
        std::string oper;
        int n;
        int o;
    public:
        rpn(std::string str);
        ~rpn();
        rpn(const rpn& r);
        rpn& operator=(const rpn& r);
        void aaa(int val);
        void print_value();
};



#endif
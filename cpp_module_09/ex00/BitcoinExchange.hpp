#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fcntl.h>
#include <fstream>
#include <string>

class btc
{
    private:
        std::string file;
        std::map<std::string, float> data;
        std::string in_date;
        std::string in_num;
    public:
        btc(std::string name);
        ~btc();
        btc(const btc& b);
        btc& operator=(const btc& b);
        void parse_data();
        void insert_values(std::string str, float val);
        void print_values();
        int check(std::string s);
        void fill(std::string s);
        int check_date();
        int check_num();
};


#endif
#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class weapon{
    private:
        std::string type;
    public:
        weapon();
        weapon(const std::string &type);
        const   std::string getType();
        void    setType(std::string type);
};



#endif
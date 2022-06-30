#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "weapon.hpp"

class humanA{
    private:
        std::string name;
        weapon *w;
    public:
        humanA();
        humanA(std::string name, weapon& w);
        void    attack();
        void    setname(std::string name);
        void    setweapon(weapon& w);
};

#endif
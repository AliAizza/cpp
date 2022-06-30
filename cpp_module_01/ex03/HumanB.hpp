#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "weapon.hpp"

class humanB{
    private:
        std::string name;
        weapon *w;
    public:
        humanB();
        humanB(std::string name);
        void    attack();
        void    setname(std::string name);
        void    setweapon(weapon &w);
};

#endif
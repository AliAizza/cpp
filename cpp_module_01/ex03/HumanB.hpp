#ifndef HumanB_HPP
#define HumanB_HPP

#include <iostream>
#include "weapon.hpp"

class HumanB{
    private:
        std::string name;
        weapon *w;
    public:
        HumanB();
        HumanB(std::string name);
        void    attack();
        void    setname(std::string name);
        void    setweapon(weapon &w);
};

#endif
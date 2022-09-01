#ifndef HumanA_HPP
#define HumanA_HPP

#include <iostream>
#include "weapon.hpp"

class HumanA{
    private:
        std::string name;
        weapon *w;
    public:
        HumanA();
        HumanA(std::string name, weapon& w);
        void    attack();
        void    setname(std::string name);
        void    setweapon(weapon& w);
};

#endif
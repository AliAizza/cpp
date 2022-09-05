#ifndef HumanA_HPP
#define HumanA_HPP

#include <iostream>
#include "weapon.hpp"

class HumanA{
    private:
        std::string name;
        Weapon *w;
    public:
        HumanA();
        HumanA(std::string name, Weapon& w);
        void    attack();
        void    setname(std::string name);
        void    setweapon(Weapon& w);
        ~HumanA();
};

#endif
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap:public ClapTrap{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ~ScavTrap();
        ScavTrap(const ScavTrap& s);
        ScavTrap& operator=(const ScavTrap& s);
        void attack(const std::string& target);
        void takedamage(unsigned int amount);
        void berepaired(unsigned int amount);
        void guardGate();
};


#endif
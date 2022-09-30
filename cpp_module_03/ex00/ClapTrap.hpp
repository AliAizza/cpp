#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
    private:
        std::string name;
        unsigned int hit_points;
        unsigned int energy_points;
        unsigned int attack_damage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ~ClapTrap();
        ClapTrap(const ClapTrap& s);
        ClapTrap& operator=(const ClapTrap& s);
        void attack(const std::string& target);
        void takedamage(unsigned int amount);
        void berepaired(unsigned int amount);
};

#endif
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap:public ClapTrap{
    public:
        FragTrap();
        FragTrap(std::string name);
        ~FragTrap();
        FragTrap(const FragTrap& f);
        FragTrap& operator=(const FragTrap& f);
        void attack(const std::string& target);
        void takedamage(unsigned int amount);
        void berepaired(unsigned int amount);
        void highFivesGuys(void);
};

#endif
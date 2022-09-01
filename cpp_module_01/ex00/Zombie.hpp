#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{
    private:
        std::string name;
    public:
        Zombie();
        Zombie(std::string name);
        void    announce(void);
        ~Zombie();
};
Zombie  *newzombie(std::string name);
void    randomchump(std::string name);

#endif
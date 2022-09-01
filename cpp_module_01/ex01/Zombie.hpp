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
        void    setname(std::string name);
        std::string getname(void);
        ~Zombie();
};
Zombie* zombiehorde(int n, std::string name);

#endif
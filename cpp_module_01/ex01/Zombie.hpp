#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class zombie{
    private:
        std::string name;
    public:
        zombie();
        zombie(std::string name);
        void    announce(void);
        void    setname(std::string name);
        std::string getname(void);
};
zombie* zombiehorde(int n, std::string name);

#endif
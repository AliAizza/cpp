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
};
zombie  *newzombie(std::string name);
void    randomchump(std::string name);

#endif
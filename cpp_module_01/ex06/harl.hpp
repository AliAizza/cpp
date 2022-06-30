#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class harl{
    private:
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);
        std::string levels[4];
    public:
        harl();
        void    complain(std::string level);
        int     getindex(std::string level);
        void    setlevels(void);
};

#endif
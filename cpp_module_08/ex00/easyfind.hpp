#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <iterator>
#include <vector>
#include <list>

class NotFoundException : public std::exception{
    const char * what() const throw(){
        return ("no occurence is found");
    }
};



template <typename T> void easyfind (T container, int i){
    typename T::iterator x = std::find(container.begin(), container.end(), i);
    if (x != container.end())
    {
        std::cout << "element found at position: " << std::distance(container.begin(), x) << std::endl;
    }
    else
        throw(NotFoundException());
}


#endif
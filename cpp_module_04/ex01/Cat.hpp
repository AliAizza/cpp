#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal{
    private:
        Brain *brain;
    public:
        Cat();
        ~Cat();
        Cat(const Cat& c);
        Cat& operator=(const Cat& c);
        void makeSound()const;
        std::string getBrains(int index);
        void setBrains(int index, std::string str);
};


#endif
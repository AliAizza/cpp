#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain{
    private:
        std::string ideas[100];
    public:
        Brain();
		Brain(const Brain& b);
		~Brain();
		Brain& operator=(const Brain& b);
        std::string getIdeas(int index);
		void setIdeas(int index, std::string idea);
};


#endif
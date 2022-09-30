#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"


class ShrubberyCreationForm : public Form{
    public:
        ShrubberyCreationForm(std::string target);
        ~ShrubberyCreationForm();
        void execute(const Bureaucrat& executor);
};



#endif
#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"


class RobotomyRequestForm : public Form{
    public:
        RobotomyRequestForm(std::string target);
        ~RobotomyRequestForm();
        void execute(const Bureaucrat& executor);
};





#endif
#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
    private:
        const std::string name;
        const int s_grade;
        const int e_grade;
        bool sign;
    public:
        Form(std::string name, int s_grade, int e_grade);
        ~Form();
        Form(const Form& f);
        Form& operator=(const Form& f);
        std::string getName();
        int getSgrade();
        int getEgrade();
        bool getSign();
        void beSigned(Bureaucrat& b);
        class GradeTooHighException: public std::exception
        {
            const char* what() const throw()
            {
                return ("grade too high");
            }
        };
        class GradeTooLowException: public std::exception
        {
            const char* what() const throw()
            {
                return ("grade too low");
            }
        };
};
std::ostream& operator<<(std::ostream& obj, Form& f);


#endif
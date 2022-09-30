#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <fstream>
#include <cstdlib>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
    private:
        const std::string name;
        const int s_grade;
        const int e_grade;
        bool sign;
        std::string target;
    public:
        Form();
        Form(std::string name, int s_grade, int e_grade, std::string target);
        virtual ~Form();
        Form(const Form& f);
        Form& operator=(const Form& f);
        std::string getName() const;
        int getSgrade() const;
        int getEgrade() const;
        bool getSign() const;
        std::string getTarget() const;
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
        class NotSignedException: public std::exception
        {
            const char* what() const throw()
            {
                return ("Form not signed");
            }
        };
        virtual void execute(const Bureaucrat& executor) = 0;
};
std::ostream& operator<<(std::ostream& obj, Form& f);


#endif
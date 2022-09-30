#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat& b);
        Bureaucrat& operator=(const Bureaucrat& b);
        std::string getName() const;
        int getGrade() const;
        void increment();
        void decrement();
        void signForm(Form& f);
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
std::ostream& operator<<(std::ostream& obj, const Bureaucrat& b);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 00:39:43 by aaizza            #+#    #+#             */
/*   Updated: 2022/09/24 16:43:40 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(){
    try
    {
        Bureaucrat b("leon", 14);
        Intern i;
        Form *f;

        f = i.makeForm("shrubbery creation", "spike");
        f->beSigned(b);
        f->execute(b);
        delete f;
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    
    // try
    // {
    //     Bureaucrat b("leon", 14);
    //     Intern i;
    //     Form *f;

    //     f = i.makeForm("robotomy request", "spike");
    //     f->beSigned(b);
    //     f->execute(b);
    //     delete f;
    // }
    // catch(std::exception& e)
    // {
    //     std::cout << e.what() << std::endl;
    // }

    // try
    // {
    //     Bureaucrat b("leon", 3);
    //     Intern i;
    //     Form *f;

    //     f = i.makeForm("presidential pardon", "spike");
    //     f->beSigned(b);
    //     f->execute(b);
    //     delete f;
    // }
    // catch(std::exception& e)
    // {
    //     std::cout << e.what() << std::endl;
    // }
}
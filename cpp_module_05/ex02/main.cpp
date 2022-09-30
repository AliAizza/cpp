/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 00:39:43 by aaizza            #+#    #+#             */
/*   Updated: 2022/09/24 01:30:35 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(){
    try
    {
        Bureaucrat b("leon", 135);
        ShrubberyCreationForm s("spike");
        s.beSigned(b);
        s.execute(b);
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }


    // try
    // {
    //     Bureaucrat b("leon", 45);
    //     RobotomyRequestForm r("spike");
    //     r.beSigned(b);
    //     r.execute(b);
    // }
    // catch(std::exception& e)
    // {
    //     std::cout << e.what() << std::endl;
    // }


    // try
    // {
    //     Bureaucrat b("leon", 5);
    //     PresidentialPardonForm p("spike");
    //     p.beSigned(b);
    //     p.execute(b);
    // }
    // catch(std::exception& e)
    // {
    //     std::cout << e.what() << std::endl;
    // }


    // Bureaucrat b("leon", 10);
    // PresidentialPardonForm p("spike");
    // p.beSigned(b);
    // b.executeForm(p);

}
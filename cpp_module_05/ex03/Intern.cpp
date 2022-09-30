/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 23:05:34 by aaizza            #+#    #+#             */
/*   Updated: 2022/09/24 01:54:46 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


Intern::Intern(){
    std::cout << "Intern constructor called" << std::endl;
}

Intern::~Intern(){
    std::cout << "Intern destructor called" << std::endl;
}

Form* Intern::makeForm(std::string name, std::string target){
    std::string s[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    Form* f[3];

    f[0] = new ShrubberyCreationForm(target);
    f[1] = new RobotomyRequestForm(target);
    f[2] = new PresidentialPardonForm(target);

    for (int i = 0; i < 3; i++)
    {
        if (s[i] == name)
        {
            std::cout << "Intern creates " << s[i] << std::endl;
            int j = i + 1;
            while (j < 3)
            {
                delete f[j];
                j++;
            }
            return(f[i]);
        }
            delete f[i];
    }
    std::cout << "Form not found" << std::endl;
    return(NULL);
}
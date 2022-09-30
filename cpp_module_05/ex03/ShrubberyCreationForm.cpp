/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 22:33:22 by aaizza            #+#    #+#             */
/*   Updated: 2022/09/22 22:42:05 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("shrubbery",145,137,target){
    std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor){
    if (this->getSign() && executor.getGrade() <= this->getEgrade())
    {
        std::string f = getTarget() + "_shrubbery";
        std::ofstream file(f);
        file << "     ccee88oo" << std::endl;
        file << "  C8O8O8Q8PoOb o8oo" << std::endl;
        file << " dOB69QO8PdUOpugoO9bD" << std::endl;
        file << "CgggbU8OU qOp qOdoUOdcb" << std::endl;
        file << "    6OuU  /p u gcoUodpP" << std::endl;
        file << "      \\//  /douUP" << std::endl;
        file << "        \\////" << std::endl;
        file << "         |||// " << std::endl;
        file << "         |||//" << std::endl;
        file << "         |||||" << std::endl;
        file << "   .....//||||/...." << std::endl;
    }
    else
    {
        if (executor.getGrade() > getEgrade())
            throw(GradeTooLowException());
        else
            throw(NotSignedException());
    }
}
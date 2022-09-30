/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 23:33:08 by aaizza            #+#    #+#             */
/*   Updated: 2022/09/22 23:40:19 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target):Form("Pardon", 25, 5, target){
    std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

void PresidentialPardonForm::execute(const Bureaucrat& executor){
    if (this->getSign() && executor.getGrade() <= this->getEgrade())
        std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    else
    {
        if (executor.getGrade() > getEgrade())
            throw(GradeTooLowException());
        else
            throw(NotSignedException());
    }
}
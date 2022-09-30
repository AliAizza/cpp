/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 22:49:31 by aaizza            #+#    #+#             */
/*   Updated: 2022/09/22 23:24:33 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target):Form("Robotomy", 72, 45, target){
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(){
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

void RobotomyRequestForm::execute(const Bureaucrat& executor){
    if (this->getSign() && executor.getGrade() <= this->getEgrade())
    {
        srand(time(0));
        int r = rand() % 2;
        if (r == 1)
            std::cout << getTarget() <<" has been robotomized successfully!" << std::endl;
        else
            std::cout << "the robotomy failed." << std::endl;
    }
    else
    {
        if (executor.getGrade() > getEgrade())
            throw(GradeTooLowException());
        else
            throw(NotSignedException());
    }
}
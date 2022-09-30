/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 00:18:46 by aaizza            #+#    #+#             */
/*   Updated: 2022/09/20 01:30:23 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade):name(name)
{
    std::cout << "Bureaucrat constructor called" << std::endl;
    if (grade > 150)
        throw(GradeTooLowException());
    else if (grade < 1)
        throw(GradeTooHighException());
    this->grade = grade;
}

Bureaucrat::~Bureaucrat(){
    std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& b):name(b.name){
    std::cout << "Bureaucrat copy constructor called" << std::endl;
    *this = b;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& b){
    this->grade = b.grade;
    return (*this);
}

std::string Bureaucrat::getName() const{
    return (name);
}

int Bureaucrat::getGrade() const{
    return(grade);
}

void Bureaucrat::increment(){
    grade--;
    if (grade < 1)
        throw(GradeTooHighException());
}

void Bureaucrat::decrement(){
    grade++;
    if (grade > 150)
        throw(GradeTooLowException());
}

std::ostream& operator<<(std::ostream& obj, const Bureaucrat& b){
    obj << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
    return(obj);
}
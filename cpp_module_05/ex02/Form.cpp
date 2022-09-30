/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 23:06:47 by aaizza            #+#    #+#             */
/*   Updated: 2022/09/22 23:56:06 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name(""), s_grade(150), e_grade(150), sign(false), target("")
{
    std::cout << "Form default constuctor called" << std::endl;
}

Form::Form(std::string name, int s_grade, int e_grade, std::string target):name(name),s_grade(s_grade),e_grade(e_grade),sign(false),target(target){
    std::cout << "Form constuctor called" << std::endl;
    if(s_grade < 1 || e_grade < 1)
        throw(GradeTooHighException());
    else if (s_grade > 150 || e_grade > 150)
        throw(GradeTooLowException());
}

Form::~Form(){
    std::cout << "Form destuctor called" << std::endl;
}

Form::Form(const Form& f):name(f.name),s_grade(f.s_grade),e_grade(f.e_grade){
    std::cout << "Form copy constuctor called" << std::endl;
    *this = f;
}

Form& Form::operator=(const Form& f){
    this->sign = f.sign;
    return(*this);
}

std::string Form::getName() const{
    return(name);
}

int Form::getSgrade() const{
    return(s_grade);
}

int Form::getEgrade() const{
    return(e_grade);
}

bool Form::getSign() const{
    return(sign);
}

std::string Form::getTarget() const{
    return(target);
}

std::ostream& operator<<(std::ostream& obj, Form& f){
    obj << "Name: " << f.getName() << std::endl;
    obj << "Grade required to sign: " << f.getSgrade() << std::endl;
    obj << "Grade required to execute: " << f.getEgrade() << std::endl;
    return  (obj);
}

void Form::beSigned(Bureaucrat& b){
    if (b.getGrade() <= s_grade)
        sign = true;
    else
        throw(GradeTooLowException());
}
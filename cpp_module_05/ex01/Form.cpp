/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 23:06:47 by aaizza            #+#    #+#             */
/*   Updated: 2022/09/21 00:04:01 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int s_grade, int e_grade):name(name),s_grade(s_grade),e_grade(e_grade),sign(false){
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

std::string Form::getName(){
    return(name);
}

int Form::getSgrade(){
    return(s_grade);
}

int Form::getEgrade(){
    return(e_grade);
}

bool Form::getSign(){
    return(sign);
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 23:15:44 by aaizza            #+#    #+#             */
/*   Updated: 2022/09/16 15:28:05 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Animal constructor called" << std::endl;
    type = "Animal";
}

Animal::~Animal(){
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal& a){
    std::cout << "Animal copy constructor called" << std::endl;
    *this = a;
}

Animal& Animal::operator=(const Animal& a){
    this->type = a.type;
    return(*this);
}

std::string Animal::getType() const {
    return(this->type);
}

void Animal::setType(std::string type)
{
    this->type = type;
}

void Animal::makeSound() const {
    std::cout << "Animal is making a sound!" << std::endl;
}

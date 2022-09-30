/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 18:01:13 by aaizza            #+#    #+#             */
/*   Updated: 2022/09/16 15:27:20 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout << "WrongAnimal constructor called" << std::endl;
    type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& a){
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = a;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& a){
    this->type = a.type;
    return(*this);
}

std::string WrongAnimal::getType() const {
    return(this->type);
}

void WrongAnimal::setType(std::string type)
{
    this->type = type;
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal is making a sound!" << std::endl;
}

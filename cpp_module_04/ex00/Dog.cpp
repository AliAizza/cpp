/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 23:23:02 by aaizza            #+#    #+#             */
/*   Updated: 2022/09/11 23:55:04 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog constructor called" << std::endl;
    type = "Dog";
}

Dog::~Dog(){
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog& d){
    std::cout << "Dog copy constructor called" << std::endl;
    *this = d;
}

Dog& Dog::operator=(const Dog& d){
    this->type = d.type;
    return(*this);
}

void Dog::makeSound() const{
    std::cout << "haw haw haw" << std::endl;
}

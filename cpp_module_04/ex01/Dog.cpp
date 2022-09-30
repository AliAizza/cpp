/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 23:23:02 by aaizza            #+#    #+#             */
/*   Updated: 2022/09/18 17:18:35 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog constructor called" << std::endl;
    type = "Dog";
    brain = new Brain();
}

Dog::~Dog(){
    delete brain;
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog& d){
    std::cout << "Dog copy constructor called" << std::endl;
    *this = d;
}

Dog& Dog::operator=(const Dog& d){
    this->type = d.type;
    this->brain = new Brain();
    return(*this);
}

void Dog::makeSound() const{
    std::cout << "haw haw haw" << std::endl;
}

std::string Dog::getBrains(int index)
{
	return brain->getIdeas(index);
}

void Dog::setBrains(int index, std::string str){
    brain->setIdeas(index, str);
}

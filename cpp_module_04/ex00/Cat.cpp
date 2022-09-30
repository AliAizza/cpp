/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 23:21:55 by aaizza            #+#    #+#             */
/*   Updated: 2022/09/11 23:55:11 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Cat constructor called" << std::endl;
    type = "Cat";
}

Cat::~Cat(){
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat& c){
    std::cout << "Cat copy constructor called" << std::endl;
    *this = c;
}

Cat& Cat::operator=(const Cat& c){
    this->type = c.type;
    return(*this);
}

void Cat::makeSound() const{
    std::cout << "meow meow meow" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 18:03:40 by aaizza            #+#    #+#             */
/*   Updated: 2022/09/13 18:05:03 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
    std::cout << "WrongCat constructor called" << std::endl;
    type = "WrongCat";
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& c){
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = c;
}

WrongCat& WrongCat::operator=(const WrongCat& c){
    this->type = c.type;
    return(*this);
}

void WrongCat::makeSound() const{
    std::cout << "meow meow meow" << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 13:26:40 by aaizza            #+#    #+#             */
/*   Updated: 2022/09/05 15:17:53 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    this->value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& f){
    std::cout << "Copy constructor called" << std::endl;
    *this = f;
}

Fixed& Fixed::operator=(const Fixed& f)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->value = f.getRawBits();
    return (*this);
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const{
    std::cout << "getRawBits member function called" << std::endl;
    return(this->value);
}

void Fixed::setRawBits(int const raw){
    this->value = raw;
    std::cout << "setRawBits member function called" << std::endl;
}
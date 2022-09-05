/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 13:26:40 by aaizza            #+#    #+#             */
/*   Updated: 2022/09/05 17:12:01 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    this->value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int v)
{
    std::cout << "Int constructor called" << std::endl;
    this->value = v * (1 << this->bits);
}

Fixed::Fixed(const float v)
{
    std::cout << "Float constructor called" << std::endl;
    this->value = roundf((float) v * (1 << this->bits));
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

std::ostream& operator<<(std::ostream& cout, const Fixed& f){
    cout << f.toFloat();
    return(cout);
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat() const{
    return ((float) this->value / (1 << 8));
}

int Fixed::toInt() const{
    return (this->value / (1 << 8));
}

int Fixed::getRawBits() const{
    return(this->value);
}

void Fixed::setRawBits(int const raw){
    this->value = raw;
}
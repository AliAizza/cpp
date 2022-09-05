/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 13:26:40 by aaizza            #+#    #+#             */
/*   Updated: 2022/09/05 22:45:29 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    this->value = 0;
}

Fixed::Fixed(const int v)
{
    this->value = v * (1 << this->bits);
}

Fixed::Fixed(const float v)
{
    this->value = roundf((float) v * (1 << this->bits));
}

Fixed::Fixed(const Fixed& f){
    *this = f;
}

Fixed& Fixed::operator=(const Fixed& f)
{
    this->value = f.getRawBits();
    return (*this);
}

std::ostream& operator<<(std::ostream& cout, const Fixed& f){
    cout << f.toFloat();
    return(cout);
}

Fixed::~Fixed(){

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

bool Fixed::operator>(const Fixed& f){
    return(this->value > f.value);
}

bool Fixed::operator<(const Fixed& f){
    return(this->value < f.value);
}

bool Fixed::operator<=(const Fixed& f){
    return(this->value <= f.value);
}

bool Fixed::operator>=(const Fixed& f){
    return(this->value >= f.value);
}

bool Fixed::operator==(const Fixed& f){
    return(this->value == f.value);
}

bool Fixed::operator!=(const Fixed& f){
    return(this->value != f.value);
}

Fixed Fixed::operator+(const Fixed& f){
    Fixed tmp;
    tmp.value = f.value + this->value;
    return(tmp);
}

Fixed Fixed::operator-(const Fixed& f){
    Fixed tmp;
    tmp.value = this->value - f.value;
    return(tmp);
}

Fixed Fixed::operator*(const Fixed& f){
    return (Fixed(this->toFloat() * f.toFloat()));
}

Fixed Fixed::operator/(const Fixed& f){
    return (Fixed(this->toFloat() / f.toFloat()));
}

Fixed& Fixed::operator++(){
    this->value++;
    return(*this);
}

Fixed Fixed::operator++(int){
    Fixed tmp = *this;
    this->value++;
    return(tmp);
}

Fixed& Fixed::operator--(){
    this->value--;
    return(*this);
}

Fixed Fixed::operator--(int){
    Fixed tmp = *this;
    this->value--;
    return(tmp);
}

Fixed& Fixed::min(Fixed& f1, Fixed& f2){
    return(f1.value < f2.value ? f1 : f2);
}

const Fixed& Fixed::min(const Fixed& f1, const Fixed& f2){
    return(f1.value < f2.value ? f1 : f2);
}

Fixed& Fixed::max(Fixed& f1, Fixed& f2){
    return(f1.value > f2.value ? f1 : f2);
}

const Fixed& Fixed::max(const Fixed& f1, const Fixed& f2){
    return(f1.value > f2.value ? f1 : f2);
}

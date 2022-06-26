/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 01:58:55 by aaizza            #+#    #+#             */
/*   Updated: 2022/06/26 07:39:39 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
// #include "phonebook.hpp"

contact::contact(){
    
}

std::string contact::getfirstname()
{
    return (this->first_name);
}

std::string contact::getlastname()
{
    return (this->last_name);
}

std::string contact::getnickname()
{
    return (this->nickname);
}

int         contact::getindex()
{
    return (this->index);
}

void contact::setfirstname(std::string name)
{
    this->first_name = name;
}

void contact::setlastname(std::string name)
{
    this->last_name = name;
}

void contact::setnickname(std::string name)
{
    this->nickname = name;
}

void contact::setnumber(std::string name)
{
    this->phone_number = name;
}

void contact::setsecret(std::string name)
{
    this->darkest_secret = name;
}

void contact::setindex(int i)
{
    this->index = i;
}

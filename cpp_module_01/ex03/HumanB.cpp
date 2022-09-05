/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 03:11:00 by aaizza            #+#    #+#             */
/*   Updated: 2022/09/02 02:18:49 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(){

}

HumanB::HumanB(std::string name){
    this->name = name;
}

void    HumanB::attack(){
    std::cout << this->name << " attacks with their ";
    if (this->w != NULL)
        std::cout << this->w->getType();
    std::cout << std::endl;
}

void    HumanB::setname(std::string name){
    this->name = name;
}

void    HumanB::setweapon(Weapon &w){
    this->w = &w;
}
HumanB::~HumanB(){

}

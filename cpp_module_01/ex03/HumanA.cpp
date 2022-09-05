/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 03:02:15 by aaizza            #+#    #+#             */
/*   Updated: 2022/09/02 13:03:09 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(){

}

HumanA::HumanA(std::string name, Weapon &w){
    this->name = name;
    this->w = &w;
}

void    HumanA::attack(){
    std::cout << this->name << " attacks with their " << this->w->getType() << std::endl;
}

void    HumanA::setname(std::string name){
    this->name = name;
}

void    HumanA::setweapon(Weapon &w){
    this->w = &w;
}

HumanA::~HumanA(){

}
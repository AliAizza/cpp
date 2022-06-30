/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 03:11:00 by aaizza            #+#    #+#             */
/*   Updated: 2022/06/28 04:02:26 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

humanB::humanB(){

}

humanB::humanB(std::string name){
    this->name = name;
}

void    humanB::attack(){
    std::cout << this->name << " attacks with their " << this->w->getType() << std::endl;
}

void    humanB::setname(std::string name){
    this->name = name;
}

void    humanB::setweapon(weapon &w){
    this->w = &w;
}
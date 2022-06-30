/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 03:02:15 by aaizza            #+#    #+#             */
/*   Updated: 2022/06/28 04:26:07 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

humanA::humanA(){

}

humanA::humanA(std::string name, weapon &w){
    this->name = name;
    this->w = &w;
}

void    humanA::attack(){
    std::cout << this->name << " attacks with their " << this->w->getType() << std::endl;
}

void    humanA::setname(std::string name){
    this->name = name;
}

void    humanA::setweapon(weapon &w){
    this->w = &w;
}

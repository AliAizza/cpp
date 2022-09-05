/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 02:33:29 by aaizza            #+#    #+#             */
/*   Updated: 2022/09/02 02:20:26 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "weapon.hpp"

Weapon::Weapon(){

}

Weapon::Weapon(const std::string &type){
    this->type = type;
}

const std::string Weapon::getType(){
    return (this->type);
}

void    Weapon::setType(std::string type){
    this->type = type;
}
Weapon::~Weapon(){

}
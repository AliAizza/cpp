/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 02:33:29 by aaizza            #+#    #+#             */
/*   Updated: 2022/08/15 04:10:07 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "weapon.hpp"

weapon::weapon(){

}

weapon::weapon(const std::string &type){
    this->type = type;
}

const std::string weapon::getType(){
    return (this->type);
}

void    weapon::setType(std::string type){
    this->type = type;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 22:29:47 by aaizza            #+#    #+#             */
/*   Updated: 2022/09/02 00:27:00 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){

}

Zombie::Zombie(std::string name){
    this->name = name;
}

void    Zombie::setname(std::string name){
    this->name = name;
}

std::string Zombie::getname(){
    return (this->name);
}

void    Zombie::announce(){
    std::cout << this->name << ':' << " BraiiiiiiinnnzzzZ...";
    std::cout << std::endl;
}

Zombie::~Zombie(){
    
}
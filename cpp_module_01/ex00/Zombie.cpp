/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 00:06:12 by aaizza            #+#    #+#             */
/*   Updated: 2022/09/02 00:27:07 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    
}

Zombie::Zombie(std::string name){
    this->name = name;
}

void    Zombie::announce(){
    std::cout << this->name << ':' << " BraiiiiiiinnnzzzZ...";
    std::cout << std::endl;
}

Zombie::~Zombie()
{

}
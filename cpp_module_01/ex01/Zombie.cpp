/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 22:29:47 by aaizza            #+#    #+#             */
/*   Updated: 2022/06/27 23:24:46 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

zombie::zombie(){

}

zombie::zombie(std::string name){
    this->name = name;
}

void    zombie::setname(std::string name){
    this->name = name;
}

std::string zombie::getname(){
    return (this->name);
}

void    zombie::announce(){
    std::cout << this->name << ':' << " BraiiiiiiinnnzzzZ...";
    std::cout << std::endl;
}

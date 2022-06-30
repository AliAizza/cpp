/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 00:06:12 by aaizza            #+#    #+#             */
/*   Updated: 2022/06/27 22:45:11 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

zombie::zombie()
{
    
}

zombie::zombie(std::string name){
    this->name = name;
}

void    zombie::announce(){
    std::cout << this->name << ':' << " BraiiiiiiinnnzzzZ...";
    std::cout << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 20:28:52 by aaizza            #+#    #+#             */
/*   Updated: 2022/09/09 22:25:40 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name){
    std::cout << "ClapTrap constructor called" << std::endl;
    this->name = name;
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& s){
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = s;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& s){
    this->name = s.name;
    this->hit_points = s.hit_points;
    this->energy_points = s.energy_points;
    this->attack_damage = s.attack_damage;
    return(*this);
}

void ClapTrap::attack(const std::string& target){
    if (hit_points == 0)
    {
        std::cout << "ClapTrap " << name << " can't do anything, no hit points left" << std::endl;
        return ;
    }
    else if(energy_points == 0)
    {
        std::cout << "ClapTrap " << name << " can't do anything, no energy points left" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << name << " attacks " << target << " causing " << attack_damage << " points of damage!";
    std::cout << std::endl;
    energy_points--;
}

void ClapTrap::takedamage(unsigned int amount){
    if (hit_points == 0)
    {
        std::cout << "ClapTrap " << name << " can't do anything, no hit points left" << std::endl;
        return ;
    }
    else if(energy_points == 0)
    {
        std::cout << "ClapTrap " << name << " can't do anything, no energy points left" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << name << " took " << amount << " points of damage!" << std::endl;
    while (amount > 0)
    {
        hit_points--;
        amount--;
        if (hit_points == 0)
            break;
    }
}

void ClapTrap::berepaired(unsigned int amount){
    if (hit_points == 0)
    {
        std::cout << "ClapTrap " << name << " can't do anything, no hit points left" << std::endl;
        return ;
    }
    else if(energy_points == 0)
    {
        std::cout << "ClapTrap " << name << " can't do anything, no energy points left" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << name << " repaired " << amount << " hit points!" << std::endl;
    energy_points--;
    hit_points += amount;
}
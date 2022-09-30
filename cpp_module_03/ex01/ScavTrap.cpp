/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 21:59:32 by aaizza            #+#    #+#             */
/*   Updated: 2022/09/10 00:15:19 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    std::cout << "ScavTrap constructor called" << std::endl;
    this->name = name;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& s){
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = s;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& s){
    this->name = s.name;
    this->hit_points = s.hit_points;
    this->energy_points = s.energy_points;
    this->attack_damage = s.attack_damage;
    return(*this);
}

void ScavTrap::attack(const std::string& target){
    if (hit_points == 0)
    {
        std::cout << "ScavTrap " << name << " can't do anything, no hit points left" << std::endl;
        return ;
    }
    else if(energy_points == 0)
    {
        std::cout << "ScavTrap " << name << " can't do anything, no energy points left" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << name << " attacks " << target << " causing " << attack_damage << " points of damage!";
    std::cout << std::endl;
    energy_points--;
}

void ScavTrap::takedamage(unsigned int amount){
    if (hit_points == 0)
    {
        std::cout << "ScavTrap " << name << " can't do anything, no hit points left" << std::endl;
        return ;
    }
    else if(energy_points == 0)
    {
        std::cout << "ScavTrap " << name << " can't do anything, no energy points left" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << name << " took " << amount << " points of damage!" << std::endl;
    while (amount > 0)
    {
        hit_points--;
        amount--;
        if (hit_points == 0)
            break;
    }
}

void ScavTrap::berepaired(unsigned int amount){
    if (hit_points == 0)
    {
        std::cout << "ScavTrap " << name << " can't do anything, no hit points left" << std::endl;
        return ;
    }
    else if(energy_points == 0)
    {
        std::cout << "ScavTrap " << name << " can't do anything, no energy points left" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << name << " repaired " << amount << " hit points!" << std::endl;
    energy_points--;
    hit_points += amount;
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
}
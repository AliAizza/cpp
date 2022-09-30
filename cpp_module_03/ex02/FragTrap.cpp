/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 00:24:28 by aaizza            #+#    #+#             */
/*   Updated: 2022/09/10 01:02:50 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& f){
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = f;
}

FragTrap& FragTrap::operator=(const FragTrap& f){
    this->name = f.name;
    this->hit_points = f.hit_points;
    this->energy_points = f.energy_points;
    this->attack_damage = f.attack_damage;
    return(*this);
}

void FragTrap::attack(const std::string& target){
    if (hit_points == 0)
    {
        std::cout << "FragTrap " << name << " can't do anything, no hit points left" << std::endl;
        return ;
    }
    else if(energy_points == 0)
    {
        std::cout << "FragTrap " << name << " can't do anything, no energy points left" << std::endl;
        return ;
    }
    std::cout << "FragTrap " << name << " attacks " << target << " causing " << attack_damage << " points of damage!";
    std::cout << std::endl;
    energy_points--;
}

void FragTrap::takedamage(unsigned int amount){
    if (hit_points == 0)
    {
        std::cout << "FragTrap " << name << " can't do anything, no hit points left" << std::endl;
        return ;
    }
    else if(energy_points == 0)
    {
        std::cout << "FragTrap " << name << " can't do anything, no energy points left" << std::endl;
        return ;
    }
    std::cout << "FragTrap " << name << " took " << amount << " points of damage!" << std::endl;
    while (amount > 0)
    {
        hit_points--;
        amount--;
        if (hit_points == 0)
            break;
    }
}

void FragTrap::berepaired(unsigned int amount){
    if (hit_points == 0)
    {
        std::cout << "FragTrap " << name << " can't do anything, no hit points left" << std::endl;
        return ;
    }
    else if(energy_points == 0)
    {
        std::cout << "FragTrap " << name << " can't do anything, no energy points left" << std::endl;
        return ;
    }
    std::cout << "FragTrap " << name << " repaired " << amount << " hit points!" << std::endl;
    energy_points--;
    hit_points += amount;
}

void FragTrap::highFivesGuys(){
    std::cout << "High Fives guys!" << std::endl;
}
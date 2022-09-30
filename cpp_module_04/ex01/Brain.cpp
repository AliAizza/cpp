/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:40:12 by aaizza            #+#    #+#             */
/*   Updated: 2022/09/16 15:46:07 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
    for (size_t i = 0; i < 100; i++)
	{
		ideas[i] = "idea " + std::to_string(i);
	}
}

Brain::Brain(const Brain& b)
{
    std::cout << "Brain copy constructor called" << std::endl;
	*this = b;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& b)
{
	for (size_t i = 0; i < 100; i++)
	{
		ideas[i] = b.ideas[i];
	}
	return *this;
}

std::string Brain::getIdeas(int index)
{   
    if (index < 100)
        return(ideas[index]);
    return ideas[0];
}

void    Brain::setIdeas(int index, std::string idea)
{
    if (index < 100)
        ideas[index] = idea;        
}
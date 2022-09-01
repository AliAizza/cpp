/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombiehorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 22:30:33 by aaizza            #+#    #+#             */
/*   Updated: 2022/09/02 00:26:05 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombiehorde(int n, std::string name)
{
    Zombie  *z;

    if (n > 0)
    {
        z = new Zombie[n];
        for (int i = 0; i < n; i++)
            z[i].setname(name);
        return (z);
    }
    return (NULL);
}
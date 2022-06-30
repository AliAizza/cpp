/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombiehorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 22:30:33 by aaizza            #+#    #+#             */
/*   Updated: 2022/06/27 23:24:17 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

zombie* zombiehorde(int n, std::string name)
{
    zombie  *z;

    z = new zombie[n];
    for (int i = 0; i < n; i++)
        z[i].setname(name);
    return (z);
}
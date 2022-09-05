/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 23:07:45 by aaizza            #+#    #+#             */
/*   Updated: 2022/09/02 02:01:20 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *z;
    int i = 0;

    z = zombiehorde(5, "kaaaaamliiiin");
    if (z != NULL)
    {
        while (!(z[i].getname()).empty())
            z[i++].announce();
    }
    delete [] z;
}
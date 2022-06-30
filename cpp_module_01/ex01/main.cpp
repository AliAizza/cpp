/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 23:07:45 by aaizza            #+#    #+#             */
/*   Updated: 2022/06/27 23:29:13 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    zombie *z;
    int i = 0;

    z = zombiehorde(15, "kaaaaamliiiin");
    while (!(z[i].getname()).empty())
        z[i++].announce();
    delete [] z;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 23:11:25 by aaizza            #+#    #+#             */
/*   Updated: 2022/09/09 21:43:45 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("tom");
    ClapTrap b("x");

    a.attack("jerry");
    a.takedamage(9);
    a.berepaired(0);
    a.attack("jerry");
    a.takedamage(1);
    a.attack("jerry");
    for (int i = 0; i < 11; i++)
        b.attack("y");
}
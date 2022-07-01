/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 03:12:02 by aaizza            #+#    #+#             */
/*   Updated: 2022/07/01 18:43:45 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    weapon  x , y;
    x.setType("ak-47");
    y.setType("uzi");
    humanA  a("ali",x);
    humanB  b("taha");
    b.setweapon(y);
    a.attack();
    b.attack();

//    {
//     weapon club = weapon("crude spiked club");
//     humanA bob("Bob", club);
//     bob.attack();
//     club.setType("some other type of club");
//     bob.attack();
//     }
//     {
//     weapon club = weapon("crude spiked club");
//     humanB jim("Jim");
//     jim.setweapon(club);
//     jim.attack();
//     club.setType("some other type of club");
//     jim.attack();
//     }
}
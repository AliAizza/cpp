/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 03:12:02 by aaizza            #+#    #+#             */
/*   Updated: 2022/09/02 02:12:16 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    // Weapon  x , y;
    // x.setType("ak-47");
    // y.setType("uzi");
    // HumanA  a("ali",x);
    // HumanB  b("taha");
    // b.setweapon(y);
    // a.attack();
    // b.attack();

   {
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
    }
    {
    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setweapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
    }
}
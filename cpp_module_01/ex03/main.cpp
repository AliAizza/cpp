/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 03:12:02 by aaizza            #+#    #+#             */
/*   Updated: 2022/09/02 00:30:33 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    // weapon  x , y;
    // x.setType("ak-47");
    // y.setType("uzi");
    // HumanA  a("ali",x);
    // HumanB  b("taha");
    // b.setweapon(y);
    // a.attack();
    // b.attack();

   {
    weapon club = weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
    }
    {
    weapon club = weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setweapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
    }
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 00:06:18 by aaizza            #+#    #+#             */
/*   Updated: 2022/06/27 00:12:38 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    zombie *a = newzombie("first_zombie"), *b = newzombie("second_zombie");
    a->announce();
    b->announce();
    randomchump("random");
    delete a;
    delete b;
}
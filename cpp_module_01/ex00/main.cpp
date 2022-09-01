/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 00:06:18 by aaizza            #+#    #+#             */
/*   Updated: 2022/09/02 00:20:20 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *a = newzombie("first_zombie"), *b = newzombie("second_zombie");
    a->announce();
    b->announce();
    randomchump("random");
    delete a;
    delete b;
}
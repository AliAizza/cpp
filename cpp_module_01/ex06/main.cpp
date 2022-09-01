/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 19:24:23 by aaizza            #+#    #+#             */
/*   Updated: 2022/09/02 00:39:53 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

int main(int argc, char **argv)
{
    Harl h;

    if (argc != 2)
        return (0);
    h.setlevels();
    switch (h.getindex(argv[1])){
        case 0:
            h.complain("DEBUG");
        case 1:
            h.complain("INFO");
        case 2:
            h.complain("WARNING");
        case 3:
            h.complain("ERROR");
            break;
    }
}
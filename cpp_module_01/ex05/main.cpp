/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 18:24:20 by aaizza            #+#    #+#             */
/*   Updated: 2022/09/02 00:32:34 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

int main()
{
    Harl h;
    h.complain("DEBUG");
    h.complain("INFO");
    h.complain("WARNING");
    h.complain("ERROR");
    h.complain("15");
    h.complain("test");
    return (0);
}
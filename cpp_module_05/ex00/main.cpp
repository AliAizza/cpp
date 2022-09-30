/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 00:39:43 by aaizza            #+#    #+#             */
/*   Updated: 2022/09/22 15:24:09 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){
    try
    {
        Bureaucrat b("jake", 150);
        //b.decrement();
        std::cout << b;
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}
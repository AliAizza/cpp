/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 23:32:19 by aaizza            #+#    #+#             */
/*   Updated: 2022/09/29 00:03:48 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    try
    {
        std::vector <int> v;

        v.push_back(1);
        v.push_back(2);
        v.push_back(3);
        v.push_back(4);
        v.push_back(5);

        easyfind(v, 1);
        
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    

    // try
    // {
    //     std::list <int> l;

    //     l.push_back(10);
    //     l.push_back(20);
    //     l.push_back(30);
    //     l.push_back(40);
    //     l.push_back(50);

    //     easyfind(l, 40);
    // }
    // catch(std::exception& e)
    // {
    //     std::cout << e.what() << std::endl;
    // }
    
}
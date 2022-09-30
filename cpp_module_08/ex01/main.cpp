/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 22:52:36 by aaizza            #+#    #+#             */
/*   Updated: 2022/09/29 23:31:07 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    // try
    // {
    //     std::vector <int> v;

    //     for (int i = 0; i < 30000; i++)
    //         v.push_back(i);
    //     std::vector <int>::iterator a = v.begin();
    //     std::vector <int>::iterator b = v.end();

    //     Span s(30000);
    //     s.addNumber(a, b);
    //     std::cout << s.shortestSpan() << std::endl;
    //     std::cout << s.longestSpan() << std::endl;
    // }
    // catch (std::exception& e)
    // {
    //     std::cout << e.what() << std::endl;
    // }





    Span sp(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}
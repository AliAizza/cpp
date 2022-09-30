/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:23:57 by aaizza            #+#    #+#             */
/*   Updated: 2022/09/28 20:49:11 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    try
    {
        Array<int> arr(5);

        for (int i = 0; i < 5; i++)
            arr[i] = i + 1;
        for (int i = 0; i < 5; i++)
            std::cout << arr[i] << std::endl;
        std::cout << "SIZE: " << arr.size() << std::endl;
        //std::cout << arr[15] << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    

    // try
    // {
    //     Array<std::string> arr(3);
    //     for (int i = 0; i < 3; i++)
    //         arr[i] = "string " + std::to_string(i);
    //     for (int i = 0; i < 3; i++)
    //         std::cout << arr[i] << std::endl;
    //     std::cout << "SIZE: " << arr.size() << std::endl;
    //     //std::cout << arr[4] << std::endl;
    // }
    // catch(std::exception& e)
    // {
    //     std::cout << e.what() << std::endl;
    // }
    

}
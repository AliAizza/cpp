/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 00:13:07 by aaizza            #+#    #+#             */
/*   Updated: 2022/06/28 00:41:16 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string& stringREF = string;

    std::cout << "address of string ==> " << &string << std::endl;
    std::cout << "address of stringPTR ==> " << &stringPTR << std::endl;
    std::cout << "address of stringREF ==> " << &stringREF << std::endl;

    std::cout << "value of string ==> " << string << std::endl;
    std::cout << "value of stringPTR ==> " << stringPTR << std::endl;
    std::cout << "value of stringREF ==> " << stringREF << std::endl;
}
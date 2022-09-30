/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 00:39:43 by aaizza            #+#    #+#             */
/*   Updated: 2022/09/21 00:04:51 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){
    try
    {
        Bureaucrat b("leon", 75);
        Form f("test", 75, 20);
        std::cout << b;
        std::cout << f;
        f.beSigned(b);
        b.signForm(f);
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    
}
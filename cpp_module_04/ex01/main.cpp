/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 23:35:59 by aaizza            #+#    #+#             */
/*   Updated: 2022/09/16 16:15:01 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;
    delete i;


    std::cout << "----------------------" << std::endl;


    Animal *a[6];
    for (int i = 0; i < 6; i++)
    {
        if (i % 2 == 0)
            a[i] = new Cat();
        else
            a[i] = new Dog();
    }

    for (int i = 0; i < 6; i++)
    {
        std::cout << std::endl << "*******" << std::endl << std::endl;
        a[i]->makeSound();
        delete a[i];
    }
    std::cout << std::endl << "*******" << std::endl << std::endl;
}
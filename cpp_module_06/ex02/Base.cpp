/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 21:12:52 by aaizza            #+#    #+#             */
/*   Updated: 2022/09/25 22:43:27 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base(){
    
}

A::~A(){
    
}

B::~B(){
    
}

C::~C(){
    
}

Base *generate(){
    srand(time(0));
    int i = rand() % 3;

    if (i == 0)
        return(new A());
    else if (i == 1)
        return(new B());
    else
        return(new C());
}

void identify(Base *p){
    A* a = dynamic_cast<A*>(p);
    B* b = dynamic_cast<B*>(p);
    C* c = dynamic_cast<C*>(p);

    if (a != NULL)
        std::cout << "A" << std::endl;
    else if (b != NULL)
        std::cout << "B" << std::endl;
    else if (c != NULL)
        std::cout << "C" << std::endl;
}

void identify(Base &p){
    try
    {
        A& a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        (void)a;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        B& b = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        (void)b;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        C& c = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        (void)c;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 00:25:27 by aaizza            #+#    #+#             */
/*   Updated: 2022/09/25 00:47:08 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data *ptr){
    return(reinterpret_cast<uintptr_t>(ptr));
}


Data *deserialize(uintptr_t raw){
    return(reinterpret_cast<Data*>(raw));
}

int main()
{
    Data *d = new Data;
    uintptr_t u;

    d->i = 5;
    std::cout << "address of d before: " << d << std::endl;
    std::cout << d->i << std::endl;
    u = serialize(d);
    std::cout << u << std::endl;
    d = deserialize(u);
    std::cout << "address of d after: " << d << std::endl;
    std::cout << d->i << std::endl;

}
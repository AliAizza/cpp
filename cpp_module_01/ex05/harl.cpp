/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 17:45:06 by aaizza            #+#    #+#             */
/*   Updated: 2022/09/02 00:32:27 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

Harl::Harl(){

}

void    Harl::debug(){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info(){
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void    Harl::warning(){
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error(){
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level){
    void    (Harl::*str[4])(void);
    std::string s[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i;

    str[0] = &Harl::debug;
    str[1] = &Harl::info;
    str[2] = &Harl::warning;
    str[3] = &Harl::error;
    for (i = 0; i < 4; i++){
        if (s[i] == level){
            (this->*str[i])();
            break;
        }
    }
    if (i == 4)
        std::cout << "invalid level : " << level << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 01:59:53 by aaizza            #+#    #+#             */
/*   Updated: 2022/06/27 00:45:37 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

void	ft_title(void)
{
	std::cout << std::endl;
	std::cout << "██████╗ ██╗  ██╗ ██████╗ ███╗   ██╗███████╗██████╗  ██████╗  ██████╗ ██╗  ██╗" << std::endl;
	std::cout << "██╔══██╗██║  ██║██╔═══██╗████╗  ██║██╔════╝██╔══██╗██╔═══██╗██╔═══██╗██║ ██╔╝" << std::endl;
	std::cout << "██████╔╝███████║██║   ██║██╔██╗ ██║█████╗  ██████╔╝██║   ██║██║   ██║█████╔╝ " << std::endl;
	std::cout << "██╔═══╝ ██╔══██║██║   ██║██║╚██╗██║██╔══╝  ██╔══██╗██║   ██║██║   ██║██╔═██╗ " << std::endl;
	std::cout << "██║     ██║  ██║╚██████╔╝██║ ╚████║███████╗██████╔╝╚██████╔╝╚██████╔╝██║  ██╗" << std::endl;
	std::cout << "╚═╝     ╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═══╝╚══════╝╚═════╝  ╚═════╝  ╚═════╝ ╚═╝  ╚═╝" << std::endl;
	std::cout << std::endl;
	std::cout << "Welcome to your phonebook !\nThe available entries are : " << std::endl;
	std::cout << " - ADD \n - SEARCH \n - EXIT \n" << std::endl;
}

void	ft_searchprint(std::string tmp)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (tmp[i])
	{
		if (i < 9)
			std::cout << tmp[i];
		else
		{
			std::cout << '.';
			j = 1;
			break;
		}
		i++;
	}
	while (i < 10 && j == 0)
	{
		std::cout << ' ';
		i++;
	}
}

void	ft_search(phonebook p)
{
	std::string str;
	std::string tmp;
	int i;

	i = 0;
	str = p.contacts[i].getfirstname();
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << '|';
	ft_searchprint("index");
	std::cout << '|';
	ft_searchprint("firstname");
	std::cout << '|';
	ft_searchprint("lastname");
	std::cout << '|';
	ft_searchprint("nickname");
	std::cout << '|';
	std::cout << std::endl;
	while (!str.empty())
	{
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << '|';
		std::cout << p.contacts[i].getindex();
		for (int j = 0; j < 9; j++)
			std::cout << ' ';
		std::cout << '|';
		tmp = p.contacts[i].getfirstname();
		ft_searchprint(tmp);
		std::cout << '|';
		tmp = p.contacts[i].getlastname();
		ft_searchprint(tmp);
		std::cout << '|';
		tmp = p.contacts[i].getnickname();
		ft_searchprint(tmp);
		i++;
		str = p.contacts[i].getfirstname();
		std::cout << '|';
		std::cout << std::endl;
	}
	std::cout << "---------------------------------------------" << std::endl;
}

void	ft_exit()
{
	std::cout << "Thank you for using our phonebook!" << std::endl;
	exit(0);
}

int main()
{
	std::string str;
	std::string	s;
	phonebook p;
	int i;
	int x;

    ft_title();
	x = 0;
	i = 0;
	while(1337)
	{
		getline(std::cin, s);
		if ((s.compare("ADD")) == 0)
		{
			if (i == 8)
				i = 0;
			p.contacts[i].setindex(i);
			std::cout << "FIRST NAME:";
			while (str.empty())
			{
				getline(std::cin, str);
				if (!str.empty())
					break;
				std::cout << "no empty please" << std::endl;
			}
			p.contacts[i].setfirstname(str);
			str.clear();
			std::cout << "LAST NAME:";
			while (str.empty())
			{
				getline(std::cin, str);
				if (!str.empty())
					break;
				std::cout << "no empty please" << std::endl;
			}
			p.contacts[i].setlastname(str);
			str.clear();
			std::cout << "NICKNAME:";
			while (str.empty())
			{
				getline(std::cin, str);
				if (!str.empty())
					break;
				std::cout << "no empty please" << std::endl;
			}
			p.contacts[i].setnickname(str);
			str.clear();
			std::cout << "PHONE NUMBER:";
			while (str.empty())
			{
				getline(std::cin, str);
				if (!str.empty())
					break;
				std::cout << "no empty please" << std::endl;
			}
			p.contacts[i].setnumber(str);
			str.clear();
			std::cout << "DARKEST SECRET:";
			while (str.empty())
			{
				getline(std::cin, str);
				if (!str.empty())
					break;
				std::cout << "no empty please" << std::endl;
			}
			p.contacts[i].setsecret(str);
			i++;
		}
		else if ((s.compare("SEARCH")) == 0)
			ft_search(p);
		else if ((s.compare("EXIT")) == 0)
			ft_exit();
		else
			std::cout << "invalid paramettre, try again" << std::endl;
	}
    return 0;
}
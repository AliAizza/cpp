/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 01:59:53 by aaizza            #+#    #+#             */
/*   Updated: 2022/06/29 22:33:05 by aaizza           ###   ########.fr       */
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

int ft_check(std::string str)
{
	int	i = 0;

	if (str.empty())
	{
		std::cout << "no empty please, ";
		return (0);
	}
	while (str[i])
	{
		if (!isdigit(str[i]))
		{
			std::cout << "Invalid index! Try again" << std::endl;
			return (0);
		}
		i++;
	}
	return (1);
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
	int j;
	int x;
	int index;
	int y;
	int d;

    ft_title();
	x = 0;
	i = 0;
	while(1337)
	{
		std::cout << "enter 'ADD', 'SEARCH' or 'EXIT': ";
		getline(std::cin, s);
		if ((s.compare("ADD")) == 0)
		{
			if (i == 8)
				i = 0;
			p.contacts[i].setindex(i);
			str.clear();
			std::cout << "FIRST NAME: ";
			while (str.empty())
			{
				getline(std::cin, str);
				if (!str.empty())
					break;
				std::cout << "no empty please, FIRST NAME: ";
			}
			p.contacts[i].setfirstname(str);
			str.clear();
			std::cout << "LAST NAME: ";
			while (str.empty())
			{
				getline(std::cin, str);
				if (!str.empty())
					break;
				std::cout << "no empty please, LAST NAME: ";
			}
			p.contacts[i].setlastname(str);
			str.clear();
			std::cout << "NICKNAME: ";
			while (str.empty())
			{
				getline(std::cin, str);
				if (!str.empty())
					break;
				std::cout << "no empty please, NICKNAME: ";
			}
			p.contacts[i].setnickname(str);
			str.clear();
			std::cout << "PHONE NUMBER: ";
			while (str.empty())
			{
				getline(std::cin, str);
				if (!str.empty())
					break;
				std::cout << "no empty please, PHONE NUMBER: ";
			}
			p.contacts[i].setnumber(str);
			str.clear();
			std::cout << "DARKEST SECRET: ";
			while (str.empty())
			{
				getline(std::cin, str);
				if (!str.empty())
					break;
				std::cout << "no empty please, DARKEST SECRET: ";
			}
			p.contacts[i].setsecret(str);
			i++;
		}
		else if ((s.compare("SEARCH")) == 0)
		{
			j = 1;
			y = -1;
			d = 0;
			ft_search(p);
			str.clear();
			while (j == 1)
			{
				std::cout << "enter an index: ";
				getline(std::cin, str);
				if (ft_check(str))
				{
					index = stoi(str);
					if (index < 0 || (p.contacts[index].getfirstname()).empty())
						std::cout << "Invalid index! Try again" << std::endl;
					else
					{
						std::cout << "INDEX: " << p.contacts[index].getindex() << std::endl;
						std::cout << "FIRSTNAME: " << p.contacts[index].getfirstname() << std::endl;
						std::cout << "LASTNAME: " << p.contacts[index].getlastname() << std::endl;
						std::cout << "NICKNAME: " << p.contacts[index].getnickname() << std::endl;
						j++;
					}
				}
			}
		}
		else if ((s.compare("EXIT")) == 0)
			ft_exit();
		else
			std::cout << "invalid paramettre, try again" << std::endl;
	}
    return 0;
}
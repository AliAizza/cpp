/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 13:28:18 by aaizza            #+#    #+#             */
/*   Updated: 2022/09/02 02:51:33 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
    if (argc != 4)
        return (0);
    if (!strcmp(argv[2], argv[3]))
        return (0);
    std::fstream infile;
    std::fstream outfile;
    std::string s;
    std::string str;
    size_t i;
    std::string s1 = argv[2];
    if (s1.empty())
        return (0);
    std::string s2 = argv[3];

    s = argv[1];
    argc++;
    infile.open(s, std::ios::in);
    outfile.open(s += ".replace", std::ios::out);
    s.clear();
    while (getline(infile, s))
    {
        i = 0;
        while ((i = s.find(s1, i)) != std::string::npos)
        {
            s.erase(i, s1.size());
             s.insert(i, s2);
            i += s2.size();
        }
        str += s;
        if (infile.eof())
            break;
        str += '\n';
    }
    outfile << str;
}

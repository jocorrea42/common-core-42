/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anyela <anyela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:41:41 by anyela            #+#    #+#             */
/*   Updated: 2024/01/24 11:45:57 by anyela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int	replace(char **argv, std::string str)
{
	std::ofstream	out;
	int				pos;

	out.open((std::string(argv[1]) + ".replace").c_str());
	if (out.fail())
		return (1);
	for (int i = 0; i < (int)str.size(); i++)
	{
		pos = str.find(argv[2], i);
		if (pos != -1 && pos == i)
		{
			out << argv[3];
			i += std::string(argv[2]).size() - 1;
		}
		else
			out << str[i];
	}
	out.close();
	return (0);
}

int	main(int argc, char **argv)
{
	char			c;
	std::ifstream	in;
	std::string		str;

	if (argc != 4)
	{
		std::cout << "usage: replace <file> old_word new_word" << std::endl;
		return (1);
	}
	in.open(argv[1]);
	if (in.fail())
	{
		std::cout << "Error: " << argv[1] << ": no such file or directory" << std::endl;
		return (1);
	}
	while(!in.eof() && in >> std::noskipws >> c)
		str += c;
	in.close();
	return (replace(argv, str));
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anyela <anyela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 15:04:43 by jocorrea          #+#    #+#             */
/*   Updated: 2024/01/16 11:23:22 by anyela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static int      is_valid_number(std::string number)
{
        int     i;

        i = -1;
        while (number[++i])
        {
                if (number[i] == ' ')
                        continue;
                if (number[i] < '0' || number[i] > '9')
                        return (0);
        }
        return (1);
}

int main()
{
	PhoneBook	phonebook;
	std::string	data[5];
	std::string	input;
	int 		index;

	while (1 && !std::cin.eof())
	{
		std::cout << "\001\033[1;34m\002PhoneBook> \001\033[0;0m\002";
		if (std::getline(std::cin, input) && std::cin.eof())
				break;
		if (input == "ADD")
		{
			std::cout << "\001\033[1;34m\002\nEnter Contact Information\001\033[0;0m\002" << std::endl;
			std::cout << "First Name: ";
			if (std::getline(std::cin, data[0]) && std::cin.eof())
				break;
			std::cout << "Last Name: ";
			if (std::getline(std::cin, data[1]) && std::cin.eof())
				break;
			std::cout << "NickName: ";
			if (std::getline(std::cin, data[2]) && std::cin.eof())
				break;
			do
			{
				std::cout << "Phone Number: ";
				if (std::getline(std::cin, data[3]) && std::cin.eof())
				break;
				if (is_valid_number(data[3]))
					break;
				std::cout << "Please input a valid number" << std::endl;
			} while (!is_valid_number(data[3]));
			std::cout << "Darkest Secret: ";
			if (std::getline(std::cin, data[4]) && std::cin.eof())
				break;
			if (data[0] != "" && data[1] != "" && data[2] != "" && data[3] != "" && data[4] != "")
			{
				phonebook.add_contact(data);
				std::cout << "\001\033[0;32m\002Contact Added Successfully!\001\033[0;32m\002\n" << std::endl;
			}
			else if (!std::cin.eof())
				std::cout << "\001\033[0;32m\002Invalid Contact Arguments \nContact Not Added\001\033[0;32m\002\n" << std::endl;
		}
		else if (input == "SEARCH")
		{
			phonebook.display_phonebook();
			std::cout << "\nInsert Index: ";
			std::cin >> index;
			if (std::cin.fail() || index < 0 || index >= phonebook.get_size())
			{
				std::cout << "Invalid Index!\n" << std::endl;
				std::cin.clear();
				std::getline(std::cin, input);
				continue;
			}
			phonebook.display_contact(index);
			std::cin.clear();
			std::getline(std::cin, input);
			continue;
		}
		else if (input == "EXIT")
			break;
		else if (!std::cin.eof())
			std::cout << "Invalid command\n" << std::endl;
	}
	std::cout << std::endl;
	return (0);
}
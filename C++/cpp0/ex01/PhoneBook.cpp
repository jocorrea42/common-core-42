/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anyela <anyela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 14:47:21 by jocorrea          #+#    #+#             */
/*   Updated: 2024/01/16 11:20:46 by anyela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	print_name(std::string str)
{
	if (str.length() > 10)
		std::cout << str.substr(0, 9) << ".";
	else
	{
		for (unsigned int j = 0; j < 10 - str.length(); j++)
			std::cout << " ";
		std::cout << str;
	}
	std::cout << "|";
}


int 	PhoneBook::get_size() const
{
	return (this->size);
}

void	PhoneBook::add_contact(std::string data[4])
{
	this->contacts[this->index].set_firstname(data[0]);
	this->contacts[this->index].set_lastname(data[1]);
	this->contacts[this->index].set_nickname(data[2]);
	this->contacts[this->index].set_number(data[3]);
	this->contacts[this->index].set_darkestSecret(data[4]);
	this->index = (this->index + 1) % 8;
	if (this->size < 8)
		this->size++;
}

void	PhoneBook::display_contact(int i) const
{
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|  Contact information for specified index  |" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "First Name: " << this->contacts[i].get_firstname() << std::endl;
	std::cout << "Last Name: " << this->contacts[i].get_lastname() << std::endl;
	std::cout << "Nickname: " << this->contacts[i].get_nickname() << std::endl;
	std::cout << "Number: " << this->contacts[i].get_number() << std::endl;
	std::cout << "Darkest Secret: " << this->contacts[i].get_darkestSecret() << std::endl;
}

void	PhoneBook::display_phonebook() const
{
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout  << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout  << "+----------+----------+----------+----------+" << std::endl;
	for (int i = 0; i < this->size; i++)
	{
		std::cout  << "|         " << i << "|";
		print_name(this->contacts[i].get_firstname());
		print_name(this->contacts[i].get_lastname());
		print_name(this->contacts[i].get_nickname());
		std::cout << std::endl;
	}
	std::cout << "+----------+----------+----------+----------+" << std::endl;
}
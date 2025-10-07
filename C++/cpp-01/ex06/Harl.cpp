/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anyela <anyela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:52:27 by anyela            #+#    #+#             */
/*   Updated: 2024/01/25 11:56:40 by anyela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "A wild Harl has been created!" << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "Harl leaves!" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "[DEBUG]:	I love having extra bacon for my" << std::endl;
	std::cout << "		7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
	std::cout << "		I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[INFO]:	I cannot believe adding extra bacon costs more money." << std::endl; 
	std::cout << "	You didn't put enough bacon in my burger! If you did," << std::endl;
	std::cout << "	I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[WARNING]:	I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "		I've been coming for years whereas you started working here since" << std::endl;
	std::cout << "		last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR]:	This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	void		(Harl::*ptr_complain[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*ptr_complain[i])();
			break ;
		}
	}
}
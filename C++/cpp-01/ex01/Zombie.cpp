/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anyela <anyela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 09:00:58 by anyela            #+#    #+#             */
/*   Updated: 2024/01/24 11:39:31 by anyela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	this->_name = "(new)";
	std::cout << "Zombie " << this->_name << " has been created" << std::endl;
}

Zombie::Zombie(std::string name): _name(name)
{
	std::cout << "Zombie " << this->_name << "has been created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->_name << " dead!!" << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

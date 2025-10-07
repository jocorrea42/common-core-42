/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fili <fili@student.42.fr>                  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-15 08:43:51 by fili              #+#    #+#             */
/*   Updated: 2024-04-15 08:43:51 by fili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void)
{
	std::vector<int> s;
	for (int i = 0; i < 5; i++)
		s.push_back(i);
	try
	{
		for (int i = 0; i <= 5; i++)
			std::cout << easyfind(s, i) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	return (0);
}
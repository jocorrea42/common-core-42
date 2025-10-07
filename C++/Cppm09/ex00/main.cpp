/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fili <fili@student.42.fr>                  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-15 09:14:48 by fili              #+#    #+#             */
/*   Updated: 2024-04-15 09:14:48 by fili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << "Error: Invalid number of arguments." << "Usage: " << argv[0] << " INPUT_FILE\n";
		return 1;
	}
	BitcoinExchange exchange("data.csv");
	exchange.ProcessInput(argv[1]);
	return 0;
}
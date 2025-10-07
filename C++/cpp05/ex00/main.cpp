/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrea <jocorrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:16:16 by jocorrea          #+#    #+#             */
/*   Updated: 2024/03/30 16:29:43 by jocorrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat jose("Jose", 0);
		std::cout << jose << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat aymee("Aymee", 200);
		std::cout << aymee << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat anyela("Anyela", 148);
		std::cout << anyela << std::endl;
		anyela.gradeUp();
		std::cout << anyela << std::endl;
		anyela.gradeUp();
		std::cout << anyela << std::endl;
		anyela.gradeUp();
		std::cout << anyela << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat rosa("Rosita", 3);
		std::cout << rosa << std::endl;
		rosa.gradeDown();
		std::cout << rosa << std::endl;
		rosa.gradeDown();
		std::cout << rosa << std::endl;
		rosa.gradeDown();
		std::cout << rosa << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}

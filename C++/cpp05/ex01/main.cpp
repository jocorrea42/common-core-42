/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrea <jocorrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:16:16 by jocorrea          #+#    #+#             */
/*   Updated: 2024/03/30 15:16:04 by jocorrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
		try
		{
			Form form0("BF109", 1, 5);
			std::cout << form0 << std::endl;
		}
		catch(std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			Bureaucrat jose("Jose", 15);
			Form form("Me626", 20, 45);
			std::cout << jose << std::endl;
			std::cout << form << std::endl;
			jose.signForm(form);
			std::cout << form << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			Bureaucrat aymee("Aymee", 35);
			Form form2("AN26", 20, 45);
			std::cout << aymee << std::endl;
			std::cout << form2 << std::endl;
			aymee.signForm(form2);
			std::cout << form2 << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	return (0);
}

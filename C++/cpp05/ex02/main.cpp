/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrea <jocorrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:16:16 by jocorrea          #+#    #+#             */
/*   Updated: 2024/03/30 15:54:23 by jocorrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	ShrubberyCreationForm shrubbery("Home");
	RobotomyRequestForm robotomy("Morty");
	PresidentialPardonForm pardon("Rick Sanchez");
	Bureaucrat jose("Jose", 148);
	Bureaucrat aymee("Aymee", 150);
	Bureaucrat anyela("Anyela", 3);
	try
	{
		std::cout << jose << std::endl;
		std::cout << shrubbery << std::endl;
		std::cout << robotomy << std::endl;
		std::cout << pardon << std::endl;
		jose.executeForm(shrubbery);
		jose.executeForm(robotomy);
		jose.executeForm(pardon);
		jose.signForm(shrubbery);
		jose.signForm(robotomy);
		jose.signForm(pardon);
		jose.executeForm(shrubbery);
		jose.executeForm(robotomy);
		jose.executeForm(pardon);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << jose << std::endl;
		std::cout << aymee << std::endl;
		std::cout << shrubbery << std::endl;
		std::cout << robotomy << std::endl;
		std::cout << pardon << std::endl;
		shrubbery.beSigned(aymee);
		jose.executeForm(shrubbery);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		robotomy.beSigned(anyela);
		pardon.beSigned(anyela);
		std::cout << shrubbery << std::endl;
		std::cout << robotomy << std::endl;
		std::cout << pardon << std::endl;
		anyela.executeForm(shrubbery);
		anyela.executeForm(robotomy);
		anyela.executeForm(pardon);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}

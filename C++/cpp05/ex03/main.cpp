/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrea <jocorrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:16:16 by jocorrea          #+#    #+#             */
/*   Updated: 2024/03/30 16:10:42 by jocorrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
	Intern		aymee;
	Form		*form;
	Bureaucrat	jose("Jose", 50);

	try
	{
		form = aymee.makeForm("robotomy request", "PepeAnguila");
		delete form;
		form = aymee.makeForm("shrubbery creation", "Charlie");
		delete form;
		form = aymee.makeForm("presidential pardon", "David");
		delete form;
		form = aymee.makeForm("random request", "Elisa");
		delete form;
	}
	catch (std::exception &e)
	{
		std::cout << "Caught exception: " << e.what() << std::endl;
	}
	form = aymee.makeForm("shrubbery creation", "Fred");
	form->beSigned(jose);
	jose.executeForm(*form);
	delete form;
	form = aymee.makeForm("presidential pardon", "Georgia");
	jose.signForm(*form);
	jose.executeForm(*form);
	delete form;
	return (0);
}

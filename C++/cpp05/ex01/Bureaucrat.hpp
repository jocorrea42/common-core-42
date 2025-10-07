/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrea <jocorrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:17:16 by jocorrea          #+#    #+#             */
/*   Updated: 2024/03/30 15:12:29 by jocorrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Form;

class Bureaucrat
{
	private:
			std::string	_name;
			int			_grade;
	public:
			Bureaucrat(void);
			Bureaucrat(std::string const name);
			Bureaucrat(int grade);
			Bureaucrat(std::string const name, int grade);
			Bureaucrat(Bureaucrat const &copy);
			~Bureaucrat(void);
			Bureaucrat const	&operator=(Bureaucrat const	&copy);
			std::string const	&getName(void) const;
			int const			&getGrade(void) const;
			void				gradeUp(void);
			void				gradeDown(void);
			void				signForm(Form &form);
			class GradeTooHighException: public std::exception
			{
				public:
						virtual char const	*what(void) const throw();
			};
			class GradeTooLowException: public std::exception
			{
				public:
						virtual char const	*what(void) const throw();
			};

};
std::ostream	&operator<<(std::ostream &str, Bureaucrat const &bureaucrat);

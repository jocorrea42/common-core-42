/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anyela <anyela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 14:41:20 by jocorrea          #+#    #+#             */
/*   Updated: 2024/01/16 10:18:11 by anyela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

class PhoneBook
{
	private :
	Contact contacts[8];
	int	size;
	int	index;
	public :
	int 	get_size(void) const;
	void	add_contact(std::string data[4]);
	void	display_contact(int i) const;
	void	display_phonebook(void) const;

};

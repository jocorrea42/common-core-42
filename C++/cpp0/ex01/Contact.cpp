/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anyela <anyela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 14:32:11 by jocorrea          #+#    #+#             */
/*   Updated: 2024/01/16 11:21:43 by anyela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
//get
const std::string& Contact::get_firstname() const
{
	return (this->firstname);
}
const std::string& Contact::get_lastname() const
{
	return (this->lastname);
}
const std::string& Contact::get_nickname() const
{
	return (this->nickname);
}
const std::string& Contact::get_number() const
{
	return (this->number);
}
const std::string& Contact::get_darkestSecret() const
{
	return (this->number);
}
//set
void	Contact::set_firstname(std::string firstname)
{
	this->firstname = firstname;
}
void	Contact::set_lastname(std::string lastname)
{
	this->lastname = lastname;
}
void	Contact::set_nickname(std::string nickname)
{
	this->nickname = nickname;
}
void	Contact::set_number(std::string number)
{
	this->number = number;
}
void	Contact::set_darkestSecret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}
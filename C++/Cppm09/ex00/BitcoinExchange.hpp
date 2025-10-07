/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fili <fili@student.42.fr>                  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-15 09:16:20 by fili              #+#    #+#             */
/*   Updated: 2024-04-15 09:16:20 by fili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP_
# define BITCOINEXCHANGE_HPP_

# include <string>
# include <map>
# include <fstream>
# include <sstream>
# include <iostream>
# include <algorithm>

class BitcoinExchange
{
	public:
		BitcoinExchange(const std::string &filename);
		void	ProcessInput(const std::string &filename);

	private:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &rhs);
		std::map<std::string, double> data_;
		double	GetExchangeRate(const std::string &date);
		bool	ValidateDate(const std::string &date);
		bool	ValidateValue(const double &value);
};
#endif
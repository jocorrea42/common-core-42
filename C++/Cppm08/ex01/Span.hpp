/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fili <fili@student.42.fr>                  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-15 08:54:06 by fili              #+#    #+#             */
/*   Updated: 2024-04-15 08:54:06 by fili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <algorithm>
# include <iostream>

class Span
{
	private:
		std::vector<int> _v;
		unsigned int _n;
	public:
		Span(unsigned int n);
		Span(const Span &copy);
		~Span();
		Span &operator=(const Span &copy);
		void addNumber(int n);
		int shortestSpan();
		int longestSpan();
		void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};
#endif
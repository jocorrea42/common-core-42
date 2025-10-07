/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anyela <anyela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:56:24 by anyela            #+#    #+#             */
/*   Updated: 2024/02/01 11:59:39 by anyela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const FragTrap &copy);
		FragTrap(std::string name);
		virtual ~FragTrap();
		FragTrap &operator=(const FragTrap &src);
		void highFiveGuys(void);
};

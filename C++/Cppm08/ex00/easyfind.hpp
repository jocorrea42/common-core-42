/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fili <fili@student.42.fr>                  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-15 08:44:26 by fili              #+#    #+#             */
/*   Updated: 2024-04-15 08:44:26 by fili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <stdio.h>
# include <stdlib.h>
# include <ctype.h>
# include <iostream>
# include <string>
# include <vector>
# include <fstream>
# include <algorithm>
# include <exception>

template <typename T>
int easyfind(T &container, int n)
{
    typename    T::iterator it = std::find(container.begin(), container.end(), n);
    if (it == container.end())
        throw std::exception();
    return *it;
}

#endif
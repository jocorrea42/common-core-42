/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fili <fili@student.42.fr>                  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-09 08:34:52 by fili              #+#    #+#             */
/*   Updated: 2024-04-09 08:34:52 by fili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
    Array<int> a(10);
    
    try
    {
        a[6] = 8;
        std::cout << a[6] << std::endl;
        std::cout << a[50] << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << "index is out of range" << std::endl;
    }
    return (0);
}
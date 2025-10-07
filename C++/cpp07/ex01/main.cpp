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

#include "iter.hpp"

class Test
{
    public:
        Test( void ) : _attribute( 42 ) { return; }
        int getTest( void ) const { return this->_attribute; }
    private:
        int _attribute;
};

std::ostream & operator<<( std::ostream & o, Test const & rhs ) { o << rhs.getTest(); return o; }

int main(void)
{
    int tab[] = {0, 1, 2, 3, 4};
    Test tab2[5];
    iter(tab, 5, print);
    iter(tab2, 5, print);

    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrea <jocorrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 10:28:34 by elgago            #+#    #+#             */
/*   Updated: 2023/02/18 16:47:23 by jocorrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_char(char c)
{
	return (write(1, &c, 1));
}

static int	ft_put_ptr(unsigned long long int nbr, int index)
{
	char	*base[2];
	int		i;
	int		flag;

	base[0] = "0123456789abcdef";
	base[1] = "0123456789ABCDEF";
	i = 0;
	if (!(nbr / 16))
	{
		if (write(1, &base[index][nbr % 16], 1) < 0)
			return (-1);
		return (1);
	}
	flag = ft_put_ptr(nbr / 16, index);
	if (flag < 0 || write(1, &base[index][nbr % 16], 1) < 0)
		return (-1);
	return (i + 1 + flag);
}

int	ft_print_ptr(void *ptr)
{
	int	i;

	i = write(1, "0x", 2);
	if (i < 0)
		return (-1);
	return (i + ft_put_ptr((unsigned long long int)ptr, 0));
}

int	ft_print_hex(unsigned int nbr, char x)
{
	if (x == 'x')
		return (ft_put_ptr(nbr, 0));
	return (ft_put_ptr(nbr, 1));
}

int	ft_print_unsigned_int(unsigned int nbr)
{
	unsigned int	rest;
	int				i;
	int				flag;

	i = 0;
	rest = (nbr % 10) + '0';
	if (!(nbr / 10))
		return (write(1, &rest, 1));
	flag = ft_print_unsigned_int((nbr / 10));
	if (flag < 0)
		return (-1);
	else
	{
		i += flag;
		if (write(1, &rest, 1) < 0)
			return (-1);
		return (++i);
	}
}

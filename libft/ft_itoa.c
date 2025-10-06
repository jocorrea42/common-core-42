/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrea <jocorrea@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 09:48:11 by jocorrea          #+#    #+#             */
/*   Updated: 2023/07/09 12:29:52 by jocorrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digits(int n)
{
	int				i;

	i = 0;
	if (n <= 0)
	{
		i++;
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	long int	nb;

	nb = (long int)n;
	i = digits(n);
	str = ft_calloc((i + 1), sizeof(char));
	if (str)
	{
		str[i--] = '\0';
		if (nb == 0)
			str[0] = '0';
		if (nb < 0)
		{
			str[0] = '-';
			nb = (-nb);
		}
		while (nb != 0)
		{
			str[i--] = (nb % 10) + 48;
			nb /= 10;
		}
	}
	return (str);
}

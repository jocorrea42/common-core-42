/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrea <jocorrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 08:48:33 by elgago            #+#    #+#             */
/*   Updated: 2023/02/18 17:20:38 by jocorrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_codif(char c, va_list args)
{
	int	ch;

	if (c == '%')
		return (write(1, "%", 1));
	else if (c == 'c')
	{
		ch = va_arg(args, int);
		return (write(1, &ch, 1));
	}
	else if (c == 's')
		return (ft_print_string(va_arg(args, char *)));
	else if (c == 'p')
		return (ft_print_ptr(va_arg(args, void *)));
	else if (c == 'd' || c == 'i')
		return (ft_print_nbr(va_arg(args, int)));
	else if (c == 'u')
		return (ft_print_unsigned_int(va_arg(args, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), c));
	return (0);
}

int	ft_print_string(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		if (write(1, "(null)", 6) < 0)
			return (-1);
		return (6);
	}
	if (*str == '\0')
		return (0);
	while (str[i])
	{
		if (write(1, &str[i], 1) < 0)
			return (-1);
		i++;
	}
	return (i);
}

int	ft_print_nbr(int nb)
{
	unsigned int	b;
	int				i;
	int				flag;

	i = 0;
	b = nb;
	if (nb < 0)
	{
		i += write (1, "-", 1);
		b = -nb;
	}
	if (i < 0)
		return (-1);
	if ((b / 10) == 0)
	{
		if (ft_put_char((char)((b % 10) + 48)) < 0)
			return (-1);
		return (++i);
	}
	flag = ft_print_nbr(b / 10);
	if (flag < 0 || ft_put_char(((char)((b % 10) + 48))) < 0)
		return (-1);
	return (i + 1 + flag);
}

int	ft_printf(const char *str, ...)
{
	int		i[2];
	int		flag;
	va_list	argv;

	va_start(argv, str);
	i[0] = -1;
	i[1] = 0;
	while (str[++i[0]])
	{
		if (str[i[0]] == '%')
		{
			flag = ft_printf_codif(str[++i[0]], argv);
			if (flag < 0)
				return (-1);
			i[1] += flag;
		}
		else
		{
			if (write(1, &str[i[0]], 1) <= 0)
				return (-1);
			i[1]++;
		}
	}
	va_end(argv);
	return (i[1]);
}

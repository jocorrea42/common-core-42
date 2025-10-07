/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrea <jocorrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 08:58:14 by elgago            #+#    #+#             */
/*   Updated: 2023/02/18 15:04:56 by jocorrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdint.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>
# include <stdio.h>

int	ft_printf(const char *str, ...);
int	ft_print_string( char *str);
int	ft_print_ptr(void *ptr);
int	ft_print_nbr(int nbr);
int	ft_print_unsigned_int(unsigned int nbr);
int	ft_print_hex(unsigned int nbr, char x);
int	ft_put_char(char c);

#endif

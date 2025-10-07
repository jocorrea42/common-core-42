/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clien.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrea <jocorrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 09:47:21 by jocorrea          #+#    #+#             */
/*   Updated: 2023/06/16 11:39:11 by jocorrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static int is_num(char *str)
{
    if (*str && *str == '-')
        str++;
    while (*str && ft_isdigit(*str))
        str++;
    return (!(*str));
}
void	send_char(int pid, char c)
{
	int	shift;
	int	i;

	i = 7;
	while (i >= 0)
	{
		shift = 1 << (i);
		if (c & shift)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(500);
		i--;
	}
}

void	send_message(int pid, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		send_char(pid, str[i]);
		i++;
	}
	send_char(pid, str[i]);
}

int	send(int pid, char *str)
{
	if (kill(pid, 0) == -1)
	{
		ft_putstr_fd("Invalid PID\n", 1);
		return (1);
	}
	else
	{
		if (pid == 0)
		{	
			ft_putstr_fd("Invalid PID\n", 1);
			return (1);
		}
		send_message(pid, str);
		return (0);
	}
}

int	main(int ac, char **argv)
{
	int	pid;

	if (ac != 3)
		return (1);
	if (!is_num(argv[1]))
	{
		ft_putstr_fd("invalid argument\n", 1);
		return (1);
	}
	else
	{	
		pid = ft_atoi(argv[1]);
		return (send(pid, argv[2]));
	}
}
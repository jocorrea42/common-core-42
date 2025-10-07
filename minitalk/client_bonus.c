/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrea <jocorrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 11:42:05 by jocorrea          #+#    #+#             */
/*   Updated: 2023/06/16 11:45:46 by jocorrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

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

void	sighandler(int sig)
{
	(void)sig;
	ft_putstr_fd("message reseved succasfuly!!\n"), 1;
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

int	main(int ac, char **av)
{
	int	pid;

	if (ac != 3)
		return (1);
	signal(SIGUSR1, sighandler);
	if (!is_num(argv[1]))
	{
		ft_putstr_fd("invalid argument\n", 1);
		return (1);
	}
	else
		return (send(pid, av[2]));
}


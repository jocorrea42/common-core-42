/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrea <jocorrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 09:47:18 by jocorrea          #+#    #+#             */
/*   Updated: 2023/06/16 11:38:37 by jocorrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
/*
int main(int args, char **argv)
{
    pid_t pid;

    printf("Soy %d del shell %d \n", getpid(), getppid());
    if (pid = fork() == 0)
    {
        if (kill(getpid(), SIGTERM) == -1)
        {
            perror("Fallo de Kill");
            exit(1);
        }
    }
    else
    {
        printf("Soy %d mi padre es el shell, %d es mi hijo y me eliminara\n\n", getpid(), getppid());
        printf("Terminara el proceso %d\n", getpid());
        exit(0);
    }
}*/
pid_t	g_clientpid = -1;

void	rec(int n, int pid)
{
	int				shift;
	static int		i = 7;
	static char		c;

	if (i == -1 || pid != g_clientpid)
	{
		i = 7;
		c = 0;
		g_clientpid = pid;
	}
	shift = 1 << (i);
	if (n != 0)
		c = (c | shift);
	i--;
	if (i == -1)
		write (1, &c, 1);
}

void	server(void)
{
	int	pid;

	pid = getpid();
	ft_putnbr_fd(pid, 1);
	write(1, "\n", 1);
}

void	sig_handler(int sig, siginfo_t *info, void *ptr)
{
	(void)ptr;
	if (sig == SIGUSR1)
		rec(1, info->si_pid);
	else
		rec(0, info->si_pid);
}

int	main(void)
{
	struct sigaction	act;

	act.sa_flags = 0;
	act.sa_sigaction = sig_handler;
	sigaction(SIGUSR1, &act, 0);
	sigaction(SIGUSR2, &act, 0);
	server();
	while (1)
		pause();
	return (0);
}

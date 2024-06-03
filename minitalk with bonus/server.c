/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:05:09 by amarzouk          #+#    #+#             */
/*   Updated: 2024/06/03 15:12:17 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	bit_handler(int sig)
{
	static int	c = 0;
	static int	i = 0;

	if (sig == SIGUSR2)
		c += (0 << i);
	else if (sig == SIGUSR1)
		c += (1 << i);
	i++;
	if (i == 8)
	{
		ft_printf("%c", c);
		if (!c)
			ft_printf("\n");
		c = 0;
		i = 0;
	}
}

int	main(void)
{
	ft_printf("Welcome To Ayman's Server!\n");
	ft_printf("My Server PID is: %d\n", getpid());
	while (1)
	{
		signal(SIGUSR2, bit_handler);
		signal(SIGUSR1, bit_handler);
		pause();
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:06:02 by amarzouk          #+#    #+#             */
/*   Updated: 2024/06/03 15:13:46 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_bit(int pid, char *str, size_t len)
{
	int		shift;
	size_t	i;

	i = 0;
	while (i <= len)
	{
		shift = 0;
		while (shift < 8)
		{
			if ((str[i] >> shift) & 1)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			shift++;
			usleep(200);
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int		pid;
	char	*str;

	if (ac == 3)
	{
		pid = ft_atoi(av[1]);
		str = av[2];
		if (pid <= 0)
			return (write(1, "Invalid PID\n", 1));
		send_bit(pid, str, ft_strlen(str));
	}
	else
		ft_printf("\e[92m./client <the server PID> <the string to send>\n\e");
}

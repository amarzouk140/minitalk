/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_func1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:08:56 by amarzouk          #+#    #+#             */
/*   Updated: 2024/01/16 16:38:06 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_ch(char c, int *len)
{
	write(1, &c, 1);
	(*len)++;
}

void	ft_string(char *s, int *len)
{
	size_t	i;

	i = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		(*len) = (*len) + 6;
		return ;
	}
	while (s[i] != '\0')
	{
		ft_ch(s[i], len);
		i++;
	}
}

void	ft_putnbr(int n, int *len)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*len) = (*len) + 11;
		return ;
	}
	if (n < 0)
	{
		ft_ch('-', len);
		ft_putnbr(n * -1, len);
	}
	else
	{
		if (n > 9)
			ft_putnbr(n / 10, len);
		ft_ch(n % 10 + 48, len);
	}
}

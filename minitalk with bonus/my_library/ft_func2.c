/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_func2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 19:10:35 by amarzouk          #+#    #+#             */
/*   Updated: 2024/01/16 16:38:07 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unsigned_int(unsigned int u, int *len)
{
	if (u >= 10)
		ft_unsigned_int(u / 10, len);
	ft_ch(u % 10 + '0', len);
}

void	ft_pointer(unsigned long pointer, int *length)
{
	char	string[25];
	int		i;
	char	*base_character;

	base_character = "0123456789abcdef";
	i = 0;
	write(1, "0x", 2);
	(*length) += 2;
	if (pointer == 0)
	{
		ft_ch('0', length);
		return ;
	}
	while (pointer != 0)
	{
		string[i] = base_character[pointer % 16];
		pointer = pointer / 16;
		i++;
	}
	while (i--)
	{
		ft_ch(string[i], length);
	}
}

void	ft_hexa(unsigned int x, int *len, char x_or_X)
{
	char	string[25];
	char	*base_character;
	int		i;

	if (x_or_X == 'X')
		base_character = "0123456789ABCDEF";
	else
		base_character = "0123456789abcdef";
	i = 0;
	if (x == 0)
	{
		ft_ch('0', len);
		return ;
	}
	while (x != 0)
	{
		string[i] = base_character[x % 16];
		x = x / 16;
		i++;
	}
	while (i--)
		ft_ch(string[i], len);
}

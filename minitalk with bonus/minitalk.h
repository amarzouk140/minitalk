/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:07:28 by amarzouk          #+#    #+#             */
/*   Updated: 2024/01/16 18:02:46 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "my_library/ft_printf.h"
# include <signal.h>
# include <unistd.h>

void	bit_handler(int bit);
void	send_bit(int pid, char *str, size_t len);

#endif
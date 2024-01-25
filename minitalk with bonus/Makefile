# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/16 16:01:49 by amarzouk          #+#    #+#              #
#    Updated: 2024/01/17 08:40:51 by amarzouk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER = server
CLIENT = client
CLIENT_BONUS = client_bonus
SERVER_BONUS = server_bonus
CFLAGS = -Wall -Werror -Wextra
CC = gcc
LIBFT = ./my_library


all:
	@make -s -C $(LIBFT)
	@gcc $(CFLAGS) server.c -o $(SERVER) -L$(LIBFT) -lft
	@gcc $(CFLAGS) client.c -o $(CLIENT) -L$(LIBFT) -lft
	@echo "Server And Client Are Ready!"

bonus :
	@make -s -C $(LIBFT)
	@gcc $(CFLAGS) server_bonus.c -o $(SERVER_BONUS) -L$(LIBFT) -lft
	@gcc $(CFLAGS) client_bonus.c -o $(CLIENT_BONUS) -L$(LIBFT) -lft
	@echo "Bonus Server And Client Are Ready!"

clean:
	@make clean -s -C $(LIBFT)


fclean: clean
	@make fclean -s -C $(LIBFT)
	@rm -f $(SERVER) $(CLIENT) $(CLIENT_BONUS) $(SERVER_BONUS)
	@echo "Server and Client Have Been Cleaned Successfully"

re: fclean all
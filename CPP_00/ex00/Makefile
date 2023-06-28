# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/22 10:36:28 by scastagn          #+#    #+#              #
#    Updated: 2023/06/28 09:43:05 by scastagn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= megaphone

CC			= c++

CFLAGS		= -std=c++98 -Wall -Wextra -Werror

SRC_DIR		= .

SRCS		= $(wildcard $(SRC_DIR)/*.cpp)

$(NAME): 
	$(CC) $(SRCS) $(CFLAGS) -o $(NAME)
	@clear
	@echo "[+] $(NAME) compiled"

all:		$(NAME)

clean:		
	@rm $(NAME)
	@echo "[-] $(NAME) cleaned"

fclean:		clean

re:			fclean all

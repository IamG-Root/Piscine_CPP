# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/05 21:52:51 by scastagn          #+#    #+#              #
#    Updated: 2023/07/05 22:09:41 by scastagn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Harl

CC			= c++

CFLAGS		= -std=c++98 -Wall -Wextra -Werror #-fcommon -fsanitize=address

SRC_DIR		= .

SRCS		= $(wildcard $(SRC_DIR)/*.cpp)

RM			= rm -rf

$(NAME): 
	$(CC) $(SRCS) $(CFLAGS) -o $(NAME)
	@clear
	@echo "[+] $(NAME) compiled"

all:		$(NAME)

val:		$(NAME)
	valgrind --leak-check=full ./$(NAME)
clean:		
	@$(RM) $(NAME)
	@echo "[-] $(NAME) cleaned"

fclean:		clean

re:			fclean all
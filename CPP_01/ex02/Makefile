# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/04 21:29:42 by scastagn          #+#    #+#              #
#    Updated: 2023/07/04 21:53:41 by scastagn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= HiThisIsBrain

CC			= c++

CFLAGS		= -std=c++98 -Wall -Wextra -Werror

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
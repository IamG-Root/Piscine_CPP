# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/25 18:57:32 by scastagn          #+#    #+#              #
#    Updated: 2023/06/25 20:18:17 by scastagn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= PhoneBook

CC			= g++

CFLAGS		= -std=c++98 -Wall -Wextra -Werror -fcommon -fsanitize=address

SRC_DIR		= .

SRCS		= $(wildcard $(SRC_DIR)/*.cpp)

RM			= rm -rf

$(NAME): 
	$(CC) $(SRCS) $(CFLAGS) -o $(NAME)
	@clear
	@echo "[+] $(NAME) compiled"

all:		$(NAME)

clean:		
	@$(RM) $(NAME)
	@echo "[-] $(NAME) cleaned"

fclean:		clean

re:			fclean all
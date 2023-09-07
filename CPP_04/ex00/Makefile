# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/07 11:15:47 by scastagn          #+#    #+#              #
#    Updated: 2023/09/07 12:25:01 by scastagn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=  animals
CC	= c++
FLAGS	= -std=c++98 -Wall -Wextra -Werror
RM	= rm -f
SRC	= $(wildcard *.cpp)
OBJ	= $(SRC:.cpp=.o)

all: $(NAME)

%.o : %.cpp
	@$(CC) $(FLAGS) -c $<

$(NAME) : $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $@
	@echo "[+] $(NAME) compiled"

clean:
	@$(RM) $(OBJ)
	@echo "[-] $(NAME) cleaned"

fclean: clean
	@$(RM) $(NAME)

re: fclean all
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snino <snino@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 18:59:34 by snino             #+#    #+#              #
#    Updated: 2022/12/03 15:22:30 by snino            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		:=		phonebook

CC			:=		clang++

CFLAGS		:=		-Wall -Wextra -Werror -c -std=c++98 -pedantic

RM			:=		rm -rf

SRCS		:=		main.cpp

OBJ 		:=		$(SRCS:%.cpp=%.o)

.PHONY		:		all clean fclean re

all 		: 		$(NAME)

$(NAME)		: 		$(OBJ)
					$(CC) $(OBJ) -o $(NAME)

clean		:
					$(RM) $(OBJ)

fclean		:		clean
					$(RM) $(NAME)

re			:		fclean $(NAME)
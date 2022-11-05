# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snino <snino@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 18:59:34 by snino             #+#    #+#              #
#    Updated: 2022/11/01 19:21:41 by snino            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		:=		megaphone

CC			:=		clang++

CFLAGS		:=		-Wall -Wextra -Werror -c -std=c++98 -pedantic

RM			:=		rm -rf

SRCS		:=		megaphone.cpp

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
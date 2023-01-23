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


NAME			:=		megaphone

CC				:=		c++

CFLAGS			:=		-Wall -Wextra -Werror -std=c++98 -pedantic

RM				:=		rm -rf

SRCS			:=		megaphone.cpp

OBJ_DIR			:=		obj

OBJ 			:=		$(addprefix $(OBJ_DIR)/, $(patsubst %.cpp, %.o, $(SRCS)))

.PHONY			:		all clean fclean re

all 			: 		$(NAME)

$(NAME)			: 		$(OBJ)
							$(CC) $(CFLAGS) $(OBJ)  -o $(NAME)

$(OBJ_DIR)/%.o	:		%.cpp $(HEADER)
							@mkdir -p $(OBJ_DIR)
							$(CC) $(CFLAGS) -c $< -o $@

clean			:
						$(RM) $(OBJ_DIR)

fclean			:		clean
							$(RM) $(NAME)

re				:		fclean all
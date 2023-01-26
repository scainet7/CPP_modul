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


NAME			:=		claptrap

CC				:=		c++

CFLAGS			:=		-Wall -Wextra -Werror -std=c++98 -pedantic

RM				:=		rm -rf

HEADERS			:=   	ClapTrap.hpp

SRCS			:=		main.cpp\
						ClapTrap.cpp

OBJ_DIR			:=		obj

OBJ 			:=		$(addprefix $(OBJ_DIR)/, $(patsubst %.cpp, %.o, $(SRCS)))

.PHONY			:		all clean fclean re

all 			: 		$(NAME)

$(NAME)			: 		$(HEADERS) $(OBJ)
							$(CC) $(CFLAGS) $(OBJ)  -o $(NAME)

$(OBJ_DIR)/%.o	:		%.cpp $(HEADERS)
							@mkdir -p $(OBJ_DIR)
							$(CC) $(CFLAGS) -c $< -o $@

clean			:
						$(RM) $(OBJ_DIR)

fclean			:		clean
							$(RM) $(NAME)

re				:		fclean all

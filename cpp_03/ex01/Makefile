# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbranco- <jbranco-@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/05 13:42:02 by jbranco-          #+#    #+#              #
#    Updated: 2023/12/19 17:42:47 by jbranco-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap
CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
RM = rm -f
SRCS = 	main.cpp ClapTrap.cpp ScavTrap.cpp
OBJ = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean 
	$(RM) $(NAME)

re: clean all
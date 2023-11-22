# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbranco- <jbranco-@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/22 12:14:33 by jbranco-          #+#    #+#              #
#    Updated: 2023/11/22 13:23:39 by jbranco-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main
CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
RM = rm -f
SRCS = 	main.cpp readFile.cpp
OBJ = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean 
	$(RM) $(NAME)

re: clean all
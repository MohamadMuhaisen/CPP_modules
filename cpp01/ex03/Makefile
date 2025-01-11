# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmuhaise <mmuhaise@student.42beirut.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/10 15:21:25 by mmuhaise          #+#    #+#              #
#    Updated: 2025/01/10 15:21:41 by mmuhaise         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)
	
clean:
	rm -f $(OBJ)
	
fclean: clean
	rm -f $(NAME)

re: fclean all
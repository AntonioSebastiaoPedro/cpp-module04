# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/10 17:23:27 by ansebast          #+#    #+#              #
#    Updated: 2025/04/12 08:22:49 by ansebast         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = interfaces
CXXFLAGS = -Wall -Wextra -Werror -g -std=c++98
CXX = c++
SRC = main.cpp Character.cpp Cure.cpp Ice.cpp AMateria.cpp MateriaSource.cpp
OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
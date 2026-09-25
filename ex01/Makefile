# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/24 21:13:39 by vade-mel          #+#    #+#              #
#    Updated: 2026/09/25 15:33:35 by vade-mel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := zombieHorde

CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98

HEADERS := Zombie.hpp
SRCS := main.cpp \
		Zombie.cpp\
		zombieHorde.cpp

OBJS := $(SRCS:.cpp=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJS): $(HEADERS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

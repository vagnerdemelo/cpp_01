# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/24 21:13:39 by vade-mel          #+#    #+#              #
#    Updated: 2026/09/25 12:00:17 by vade-mel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := zombies

CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98

HEADERS := Zombie.hpp
SRCS := main.cpp \
		newZombie.cpp \
		randomChump.cpp \
		Zombie.cpp

OBJS := $(SRCS:.cpp=.o)
DEPS = $(OBJS:.o=.d)
.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

$(OBJ_FOLDER)%.o: $(SRC_FOLDER)%.cpp | $(OBJ_FOLDER)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJS): $(HEADERS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

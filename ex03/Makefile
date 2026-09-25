# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/25 15:46:01 by vade-mel          #+#    #+#              #
#    Updated: 2026/09/25 16:19:36 by vade-mel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := violence

CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98

HEADERS :=	HumanA.hpp \
			HumanB.hpp \
			Weapon.hpp

SRCS := main.cpp \
		HumanA.cpp\
		HumanB.cpp \
		Weapon.cpp

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

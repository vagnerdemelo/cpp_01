# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/25 15:46:01 by vade-mel          #+#    #+#              #
#    Updated: 2026/09/25 17:53:33 by vade-mel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := violence

CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98

HEADERS :=	HumanA.hpp \
			HumanB.hpp \
			Weapon.hpp

OBJ_FOLDER = objs/

SRCS := main.cpp \
		HumanA.cpp\
		HumanB.cpp \
		Weapon.cpp

# OBJS := $(SRCS:.cpp=.o)
OBJS = $(patsubst %.cpp,$(OBJ_FOLDER)%.o,$(SRCS))


.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

$(OBJ_FOLDER):
	@mkdir -p $(OBJ_FOLDER)

$(OBJ_FOLDER)%.o: %.cpp | $(OBJ_FOLDER)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJS): $(HEADERS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

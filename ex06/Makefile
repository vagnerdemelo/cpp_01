# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/02 17:59:36 by vade-mel          #+#    #+#              #
#    Updated: 2026/10/02 23:10:38 by vade-mel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := harlFilter

CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98

HEADERS :=	Harl.hpp

OBJS_FOLDER := objs/
SRCS := main.cpp \
		Harl.cpp

# OBJS := $(SRCS:.cpp=.o)
OBJS := $(patsubst %.cpp, $(OBJS_FOLDER)%.o,$(SRCS))

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

$(OBJS_FOLDER):
	mkdir -p $(OBJS_FOLDER)

$(OBJS_FOLDER)%.o: %.cpp | $(OBJS_FOLDER)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJS): $(HEADERS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

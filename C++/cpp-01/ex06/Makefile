# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anyela <anyela@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/25 11:58:51 by anyela            #+#    #+#              #
#    Updated: 2024/01/25 12:10:13 by anyela           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Harl.cpp
OBJ = $(SRC:.cpp=.o)
CC = g++
RM = rm -f

UNAME = $(shell uname -s)
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

ifeq ($(UNAME), Linux)
CPPFLAGS = -Wall -Wextra -std=c++98 -pedantic
$(warning "Linux detected! Disabling -Werror...")
endif

NAME = Harl

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
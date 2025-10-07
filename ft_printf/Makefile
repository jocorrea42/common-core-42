# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elgago <elgago@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/14 13:24:20 by jocorrea          #+#    #+#              #
#    Updated: 2023/02/16 09:51:43 by elgago           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c ft_printf_utils.c	

OBJS = $(SRCS:.c=.o)

AR = ar rcs

CC = cc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror -MMD

INCLUDE = -I ft_printf.h

DEPS= $(OBJS:.o=.d)

%.o: %.c $(INCLUDE)
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
-include $(DEPS)

clean:
	@$(RM) $(OBJS) $(BONUS_OBJS) $(DEPS) $(DEPS_BONUS)
	

fclean: clean
	@$(RM) $(NAME)
	

re: fclean all

.PHONY: all clean fclean re bonus
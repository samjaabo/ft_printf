# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samjaabo <samjaabo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/18 17:54:00 by samjaabo          #+#    #+#              #
#    Updated: 2022/11/18 18:12:22 by samjaabo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_put.c ft_to_hex.c ft_to_nbr.c ft_printf.c
OBJS = ft_put.o ft_to_hex.o ft_to_nbr.o ft_printf.o

NAME = libftprintf.a
CC = cc

all: $(NAME)

re: fclean all

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)

%.o:%.c ft_printf.h
	$(CC) -Wall -Wextra -Werror -c $<
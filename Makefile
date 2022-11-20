# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samjaabo <samjaabo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/18 17:54:00 by samjaabo          #+#    #+#              #
#    Updated: 2022/11/20 15:07:25 by samjaabo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_to_put.c ft_to_hex.c ft_to_nbr.c ft_printf.c ft_printf_utils.c
OBJS = ft_to_put.o ft_to_hex.o ft_to_nbr.o ft_printf.o ft_printf_utils.o

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
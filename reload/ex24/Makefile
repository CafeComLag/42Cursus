# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsaraiva <nsaraiva@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/05 12:49:02 by nsaraiva          #+#    #+#              #
#    Updated: 2025/04/05 19:01:09 by nsaraiva         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ALL_C := ./srcs/ft_putchar.c \
	 ./srcs/ft_putstr.c \
	 ./srcs/ft_strcmp.c \
	 ./srcs/ft_strlen.c \
	 ./srcs/ft_swap.c

ALL_O := ft_putchar.o \
	 ft_putstr.o \
	 ft_strcmp.o \
	 ft_strlen.o \
	 ft_swap.o

LIBS := ./includes
NAME := libft.a

all: $(NAME)

$(NAME): $(ALL_O)
	ar -rcs libft.a $(ALL_O)
$(ALL_O): $(ALL_C)
	cc -Wall -Wextra -Werror -c $(ALL_C) -I$(LIBS)

clean:
	rm -f $(ALL_O)

fclean: clean
	rm -f $(NAME)

re : fclean all

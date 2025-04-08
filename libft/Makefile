# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsaraiva <nsaraiva@student.42porto.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/08 12:36:01 by nsaraiva          #+#    #+#              #
#    Updated: 2025/04/08 13:17:11 by nsaraiva         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_isalpha.c ft_isdigit.c  ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
			ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strncmp.c ft_memchr.c \
			ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c

OBJ = $(SRC:.c=.o)

NAME = libft.a

all : $(NAME)

$(NAME) : $(OBJ) 
	ar -rcs $(NAME) $(OBJ)	
$(OBJ) : $(SRC)
	cc -c -Wall -Wextra -Werror $(NAME)	

clean:
	rm -f $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

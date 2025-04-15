# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsaraiva <nsaraiva@student.42porto.com>   +#+  +:+       +#+          #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/08 12:36:01 by nsaraiva          #+#    #+#              #
#    Updated: 2025/04/15 18:21:39 by nsaraiva.        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_isalpha.c ft_isdigit.c  ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
			ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
			ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_substr.c  ft_strjoin.c ft_strdup.c \
			ft_strtrim.c ft_split.c ft_strmapi.c ft_striteri.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c\
			ft_putendl_fd.c ft_putnbr_fd.c

SRC_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
			ft_lstiter.c ft_lstmap_bonus.c

OBJ = $(SRC:.c=.o)

OBJ_BONUS = $(SRC_BONUS:.c=.o)

NAME = libft.a

all : $(NAME)

$(NAME) : $(OBJ) 
	ar -rcs $(NAME) $(OBJ)	
$(OBJ) : $(SRC)
	cc -c -Wall -Wextra -Werror $(SRC)	

bonus : $(OBJ_BONUS)
	ar -rcs $(NAME) $(OBJ_BONUS)
$(OBJ_BONUS) : $(SRC_BONUS)
	cc -c -Wall -Wextra -Werror $(SRC_BONUS)

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsaraiva <nsaraiva@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/05 13:45:47 by nsaraiva          #+#    #+#              #
#    Updated: 2025/04/05 18:59:52 by nsaraiva         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = ft_display_file
ARCHIVE = main.c

all: $(NAME)

$(NAME): $(ARCHIVE)
	cc -Wall -Wextra -Werror $(ARCHIVE) -o $(NAME)

clean:

fclean: clean
	rm -fr $(NAME)

re: fclean all

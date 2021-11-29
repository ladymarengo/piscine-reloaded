# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsamoilo <nsamoilo@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/29 13:43:57 by nsamoilo          #+#    #+#              #
#    Updated: 2021/10/29 13:48:28 by nsamoilo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c main.c
	gcc -Wall -Wextra -Werror main.o -o $(NAME)

clean:
	rm -f main.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

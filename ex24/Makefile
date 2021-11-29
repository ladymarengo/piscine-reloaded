# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsamoilo <nsamoilo@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/29 11:20:56 by nsamoilo          #+#    #+#              #
#    Updated: 2021/10/29 11:39:57 by nsamoilo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SOURCE = srcs/
INCLUDE = includes/
FUNCTIONS = ft_putchar ft_putstr ft_strcmp ft_strlen ft_swap
FILES = $(patsubst %, $(SOURCE)%.c, $(FUNCTIONS))
OBJECTS = $(patsubst %, %.o, $(FUNCTIONS))

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(FILES) -I$(INCLUDE)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

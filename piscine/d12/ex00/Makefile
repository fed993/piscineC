# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fpolyans <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/11 00:00:42 by fpolyans          #+#    #+#              #
#    Updated: 2017/07/13 19:24:47 by fpolyans         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = srcs/ft_putchar.c srcs/ft_putstr.c \
		  srcs/ft_strcmp.c srcs/ft_strlen.c \
		  srcs/ft_swap.c srcs/ft_putnbr.c

OBJECTS = ft_putchar.o ft_putstr.o \
		  ft_strcmp.o ft_strlen.o \
		  ft_swap.o ft_putnbr.o

MAIN = main.c

HEADERS = includes

FLAGS = -Wall -Wextra -Werror

LIBRARY = libft.a

all:
	gcc $(FLAGS) -I$(HEADERS) -c $(SOURCES) 
	ar rc $(LIBRARY) $(OBJECTS)

debug:
	gcc -g $(FLAGS) -I$(HEADERS) -c $(SOURCES) $(MAIN)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(LIBRARY)

re: fclean all

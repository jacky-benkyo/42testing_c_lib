#!/bin/bash


ft_putchar.c -o ft_putchar.o
ft_putstr.c -o ft_putstr.o
ft_strcmp.c -o ft_strcmp.o
cc -Wall -Wextra -Werror -c ft_strlen.c ft_swap.c -o ft_swap.o -o ft_strlen.o
ft_swap.c -o ft_swap.o
ar rcs libft.a. ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

echo "Done"

#!/bin/sh
clear && norminette && echo "==================================" && gcc -Wall -Werror -Wextra main.c rush01.c ft_putchar.c  && ./a.out

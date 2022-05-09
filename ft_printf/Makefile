# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/20 20:51:53 by mmazuelo          #+#    #+#              #
#    Updated: 2022/05/08 16:39:03 by mmazuelo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror -Wpedantic -c

SRC = ft_printf.c \
	src/ft_char.c \
	src/ft_hex.c \
	src/ft_oct.c \
	src/ft_ptr.c \
	src/ft_str.c \
	src/ft_vprintf.c \
	src/ft_int.c \
	src/ft_putnbrbase.c \
	src/ft_unsigned.c 

OBJS_d = ft_printf.o \
         src/ft_char.o \
         src/ft_hex.o \
         src/ft_oct.o \
         src/ft_ptr.o \
         src/ft_str.o \
         src/ft_vprintf.o \
         src/ft_int.o \
         src/ft_putnbrbase.o \
         src/ft_unsigned.o

OBJS = $(patsubst %.c, %.o, $(SRC))

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(SRC) -I./src/
	ar -rcs ${NAME} ${OBJS}
	ranlib ${NAME}
	@echo "\e[5m\e[31mCompile ft_print\e[25m\e[0m"

all:	${NAME}

clean:
	rm -rf *.o
	rm -rf src/*.o
fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: fclean all re

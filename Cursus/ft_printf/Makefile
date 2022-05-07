# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/20 20:51:53 by mmazuelo          #+#    #+#              #
#    Updated: 2022/05/07 12:31:49 by mmazuelo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT = src/libft/libft.a
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
	${MAKE} all -C src/libft/
	cp src/libft/libft.a $(NAME)
	
	$(CC) $(CFLAGS) $(SRC) -I./src/
	ar -rcs ${NAME} ${OBJS}
	ranlib ${NAME}
	echo "Compile ft_print"

all:	${NAME}

clean:
	find . -type file -name "*.o"  -delete -print
fclean: clean
	rm -rf $(NAME)
	rm -rf $(LIBFT)

re: fclean all

.PHONY: all 

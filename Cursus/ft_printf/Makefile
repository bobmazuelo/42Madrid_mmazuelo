# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/20 20:51:53 by mmazuelo          #+#    #+#              #
#    Updated: 2022/02/21 00:07:44 by mmazuelo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT = src/libft/libft.a
OBJ_DIR = obj/
SRC_DIR = src/
CC = gcc
CFLAGS = -c -Wall -Wextra -Werror -Wpedantic -I
AR = ar rcs
RM = rm -f


# Colours
redColour="\e[0;31m\033[1m"
greenColour="\e[0;32m\033[1m"
blueColour="\e[0;34m\033[1m"
yellowColour="\e[0;33m\033[1m"
turquoiseColour="\e[0;36m\033[1m"
purpleColour="\e[0;35m\033[1m"
grayColour="\e[0;37m\033[1m"
endColour="\033[0m\e[0m"

SRC = ft_printf.c \
	src/ft_char.c \
	src/ft_hex.c \
	src/ft_oct.c \
	src/ft_ptr.c \
	src/ft_str.c \
	src/ft_vprintf.c \
	src/ft_float.c \
	src/ft_int.c \
	src/ft_putnbrbase.c \
	src/ft_unsigned.c 

OBJS = ft_printf.o \
         src/ft_char.o \
         src/ft_hex.o \
         src/ft_oct.o \
         src/ft_ptr.o \
         src/ft_str.o \
         src/ft_vprintf.o \
         src/ft_float.o \
         src/ft_int.o \
         src/ft_putnbrbase.o \
         src/ft_unsigned.o

OBJS = $(SRC:.c=.o)

$(NAME):	${OBJS}
	${MAKE} all -C src/libft/
	cp src/libft/libft.a $(NAME)
	
	$(CC) $(FLAGS) src/ft_printf.h $(SRC)
	ar -rcs ${NAME} ${OBJS}
	#ranlib ${NAME}

all:	${NAME}
	
.PHONY: all 

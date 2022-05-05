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

CC = gcc
CFLAGS = -Wall -Wextra -Werror -Wpedantic
AR = ar rcs
RM = rm -f

FILES =   ft_printf.c \
	  src/ft_char.c \
	  src/ft_hex.c \
	  src/ft_oct.c \
	  src/ft_ptr.c \
	  src/ft_str.c \
	  src/ft_vprintf \
	  src/ft_float.c \
	  src/ft_int.c \
	  src/ft_putnbrbase.c \
	  src/ft_unsigned.c

OBJS = ${FILES: .c = .o}

.c.o:
	${CC} ${CFLAGS} -c ${FILES}

all:	${NAME}
$(NAME):	${OBJS}
	ar rc ${NAME} ${OBJS}
	ranlib ${NAME}

clean:
	${RM} ${OBJS}

fclean:
	${RM} ${NAME}

re:
	fclean all

.PHONY: all re 

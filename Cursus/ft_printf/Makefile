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

LIBFT = src/libft/libft.a

NAME = libftprintf.a

SRCS =  src/ft_printf.c \
	src/ft_char.c \
	src/ft_float.c \
	src/ft_hex.c \
	src/ft_int.c \
	src/ft_oct.c \
	src/ft_ptr.c \
	src/ft_putnbrbase.c \
	src/ft_str.c \
	src/ft_unsigned.c \
	src/ft_vprintf.c
		
CC = gcc

FLAGS = -c -Wall -Wextra -Werror -Wpedantic

INCLUDES = -I src/ft_printf.h

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(MAKE) bonus -C src/libft
	cp src/libft/libft.a $(NAME)
	$(CC) $(FLAGS) $(INCLUDES) $(SRCS)
	ar -rcs $(NAME) $(OBJS)

all :	$(NAME)

clean : 
	$(MAKE) clean -C src/libft 
	rm -rf $(OBJS)

fclean : clean
	$(MAKE) fclean -C src/libft
	rm -rf $(NAME)

re : fclean all

# ft_char
# ft_float
# ft_hex
# ft_int
# ft_oct
# ft_ptr
# ft_putnbrbase
# ft_str
# ft_unsigned
# ft_vprintf
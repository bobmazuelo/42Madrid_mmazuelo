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

SRCS =  ft_printf.c \
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

FLAGS = -Wall -Wextra -Werror -Wpedantic -c

OBJS = $(SRCS:.c=.o)

.c.o:
	$(CC) $(FLAGS) -g -c $< -o $(<:.c=.o) -I./src/

all :	$(NAME)

$(NAME): $(OBJS)
	$(MAKE) all -C src/libft
	cp src/libft/libft.a $(NAME)
	ar -rc $(NAME) $(OBJS)
	ranlib ${NAME}
	@echo "ft_printf: done"

clean : 
	$(MAKE) clean -C src/libft 
	rm -rf $(OBJS)
	rm -rf ./*.o

fclean : clean
	$(MAKE) fclean -C src/libft
	rm -rf $(NAME)

re : fclean all

.PHONY: all 

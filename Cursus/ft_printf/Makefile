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
CFLAGS = -Wall -Wextra -Werror -Wpedantic -I
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

FILES =   ft_printf \
	  ft_char \
	  ft_hex \
	  ft_oct \
	  ft_ptr \
	  ft_str \
	  ft_vprintf \
	  ft_float \
	  ft_int \
	  ft_putnbrbase \
	  ft_unsigned

SRC = $(addprefix $(SRC_DIR), $(addsuffix .c, $(FILES)))
OBJS = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(FILES)))

OBJF = .cache_exists

all:	${NAME}
$(NAME):	${OBJS}
	${MAKE} all -C src/libft/
	cp src/libft/libft.a $(NAME)

	ar rc ${NAME} ${OBJS}
	ranlib ${NAME}

$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJF)
	@$(CC) $(FLAGS) -c $< -o $@

$(OBJF):
	@mkdir -p $(OBJ_DIR)

.PHONY: all 

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/20 20:51:53 by mmazuelo          #+#    #+#              #
#    Updated: 2022/05/15 11:01:02 by mmazuelo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = gnl.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror -Wpedantic -c -D BUFFER_SIZE=5

SRC = get_next_line.c \
      get_next_line_utils.c

OBJS = $(patsubst %.c, %.o, $(SRC))

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(SRC) -I././
	ar -rcs ${NAME} ${OBJS}
	ranlib ${NAME}
	@echo "\e[5m\e[31mCompile\e[25m\e[0m"

all: 	$(NAME)

clean:
	rm -rf *.o

clear:	all
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: fclean all re

NAME = bsq.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror -Wpedantic -c

SRC = bsq_utils.c \
      bsq_map.c

OBJ = $(patsubst %.c, %.o, $(SRC))

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(SRC)
	ar -rcs ${NAME} ${OBJ}
	ranlib ${NAME}

all: ${NAME}

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

cl: all clean

.PHONY: fclean all re cl

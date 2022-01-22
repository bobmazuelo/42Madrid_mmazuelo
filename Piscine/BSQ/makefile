#Makefile Copiler BSQ

CC=gcc
CFLAGS=-Wall -Werror -Wextra

all: hello compile goodbye

hello:
	@echo "Hola estudiante de 42, bienvenido al proyecto BSQ!\nVoy a copilar los archivos necesarios (y no tan necesarios)."
	@echo "===========================================\n\n"
	@sleep 2

compile:
	perl tablero.pl $(x) $(y) $(density) > output.txt
	$(CC) $(CFLAGS) BSQlib.h BSQlib.c
	if [ "$?" -ne 0 ]; then
		echo "Build failed"
	fi

goodbye:
	@echo "Gracias por su tiempo :D!"

clean:
	-rm -f *.o

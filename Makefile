.PHONY=clean all
COMPILER=gcc
CFLAGS = -Wall -fsanitize=address -g
all: practica1 practica2
clean:
	- rm -f *.o practica1 practica2
practica1:
	$(COMPILER) $(CFLAGS) -o practica1 practica1.c
practica2:
	$(COMPILER) $(CFLAGS) -o practica2 practica2.c

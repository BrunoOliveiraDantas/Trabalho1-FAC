CC := gcc
CFLAGS := -W -Wall -pedantic -ansi -I.

SRCFILES := $(wildcard ../src/*.c)

all: $(SRCFILES:../src/%.c=../obj/%.o)
	$(CC) $(CFLAGS) ../obj/*.o -o ../bin/saida

../obj/%.o : ../src/%.c
	$(CC) $(CFLAGS) -c $< -o $@ -I../inc

.PHONY: clean
clean:
	rm -rf ../bin/*
	rm -rf ../obj/*.o
run:
	../bin/saida

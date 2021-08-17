#!/bin/bash

TARGIT=CALC_EXE

ARCHIEVE=libcalc.a

SRC=main.c message_source.c

$(TARGIT):$(SRC) $(ARCHIEVE)
	gcc -g -o $(TARGIT) $(SRC) "-L`pwd`" -lcalc 

$(ARCHIEVE):calc.c
	cc -g -c calc.c
	ar r libcalc.a calc.o
clean:
	rm *.o


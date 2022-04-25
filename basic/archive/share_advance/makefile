#!/bin/bash

TARGIT=CALC_EXE

SHARE=libcalc.so

SRC=main.c

$(TARGIT):$(SRC) $(SHARE)
	gcc -g -o $(TARGIT) $(SRC) -ldl

$(SHARE):calc.c
	cc -g -c -fPIC calc.c
	gcc -g -shared -o libcalc.so calc.o
clean:
	rm *.o


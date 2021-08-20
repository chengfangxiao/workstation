#!/bin/bash

TARGIT=TIME_EXE

#ARCHIEVE=libcalc.a

SRC=main.c

#$(TARGIT):$(SRC) $(ARCHIEVE)
$(TARGIT):$(SRC)
	gcc -g -o $(TARGIT) $(SRC)

#$(ARCHIEVE):calc.c
#	cc -g -c calc.c
#	ar r libcalc.a calc.o
clean:
	rm *.o


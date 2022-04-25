#!/bin/bash

TARGIT=chap5

#ARCHIEVE=libcalc.a

SRC=c5_main.cpp

#$(TARGIT):$(SRC) $(ARCHIEVE)
$(TARGIT):$(SRC)
	g++ -g -o $(TARGIT) $(SRC)

#$(ARCHIEVE):calc.c
#	cc -g -c calc.c
#	ar r libcalc.a calc.o
clean:
	rm *.o


#!/bin/bash

TARGIT=chap4

#ARCHIEVE=libcalc.a

SRC=ch4_main.cpp

#$(TARGIT):$(SRC) $(ARCHIEVE)
$(TARGIT):$(SRC)
	g++ -g -o $(TARGIT) $(SRC)

#$(ARCHIEVE):calc.c
#	cc -g -c calc.c
#	ar r libcalc.a calc.o
clean:
	rm *.o


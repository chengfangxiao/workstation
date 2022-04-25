#!/bin/bash

TARGIT=c1_ex

#ARCHIEVE=libcalc.a

SRC=c1_ex.cpp

#$(TARGIT):$(SRC) $(ARCHIEVE)
$(TARGIT):$(SRC)
	g++ -g -o $(TARGIT) $(SRC)

#$(ARCHIEVE):calc.c
#	cc -g -c calc.c
#	ar r libcalc.a calc.o
clean:
	rm *.o


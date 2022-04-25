#!/bin/bash

TARGIT=chap1

#ARCHIEVE=libcalc.a

SRC=ch1_main.cpp ch1.cpp

#$(TARGIT):$(SRC) $(ARCHIEVE)
$(TARGIT):$(SRC)
	g++ -g -o $(TARGIT) $(SRC)

#$(ARCHIEVE):calc.c
#	cc -g -c calc.c
#	ar r libcalc.a calc.o
clean:
	rm *.o


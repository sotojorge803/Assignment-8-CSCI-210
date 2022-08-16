program: testnumbers.o numbers.o
	gcc –o program testnumbers.o numbers.o

testnumbers.o: testnumbers.c numbers.h 
	gcc –c testnumbers.c

numbers.o: numbers.c numbers.h 
	gcc –c numbers.c
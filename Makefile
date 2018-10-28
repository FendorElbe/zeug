all: primzahlen

primzahlen: primzahlen.o
	gcc -o primzahlen primzahlen.o

primzahlen.o: primzahlen.c
	gcc -c primzahlen.c

clean:
	rm -f primzahlen
	rm -f *.o
	rm -f *~

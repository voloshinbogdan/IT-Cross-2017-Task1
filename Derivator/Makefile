# Makefile

all: Derivator

Derivator: DerivatorLib.o DerivatorApp.o
	g++ -c $@ $^

DerivatorApp.o: DerivatorApp/DerivatorApp.cpp DerivatorLib/DerivatorLib.h
	g++ -c -o $@ $^

DerivatorLib.o: DerivatorLib/DerivatorLib.cpp DerivatorLib/DerivatorLib.h
	g++ -c -o $@ $^

clean:
	rm -f *.o
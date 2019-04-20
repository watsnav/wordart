compile:wordart.cpp
	g++ -Wall -c wordart.cpp graphics/line.cpp letters/{A..Z}.cpp

install:wordart.o
	g++ -o wart *.o
	
clean:
	rm -f *.o wart

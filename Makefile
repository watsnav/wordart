compile:wordart.cpp
	g++ -Wall -c wordart.cpp graphics/line.cpp letters/A.cpp letters/N.cpp letters/V.cpp letters/E.cpp letters/T.cpp

install:wordart.o
	g++ -o wart line.o A.o wordart.o N.o V.o E.o T.o
	
clean:
	rm -f *.o wart

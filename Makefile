compile:wordart.cpp
	g++ -Wall -c wordart.cpp graphics/line.cpp letters/A.cpp letters/N.cpp letters/V.cpp letters/E.cpp letters/T.cpp letters/B.cpp letters/C.cpp letters/D.cpp letters/F.cpp letters/G.cpp letters/H.cpp letters/I.cpp letters/J.cpp letters/K.cpp letters/L.cpp letters/M.cpp letters/O.cpp letters/P.cpp letters/R.cpp letters/S.cpp letters/U.cpp letters/W.cpp letters/X.cpp letters/Y.cpp letters/Z.cpp letters/Q.cpp

install:wordart.o
	g++ -o wart line.o A.o wordart.o N.o V.o E.o T.o B.o C.o D.o F.o G.o H.o I.o J.o K.o L.o M.o O.o P.o R.o S.o U.o W.o X.o Y.o Z.o Q.o
	
clean:
	rm -f *.o wart

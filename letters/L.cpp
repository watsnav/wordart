#include "L.hpp"
#include <iostream>
using namespace std;
L::L() {
	Line l1;
	l1.draw();
	cout<<"\033[C";
	l1.draw(0,CHAR_LEN/2+1);
}
L::L(int l, char c) {
	Line l1;
	l1.draw(90,l,c);
	cout<<"\033[C";
	l1.draw(0,l/2+1,c);
}

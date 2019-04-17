#include "C.hpp"
#include <iostream>
using namespace std;
C::C() {
	Line l1;
	l1.draw(0,CHAR_LEN/2+2);
	cout<<"\033["<<CHAR_LEN/2+1<<"D";
	l1.draw();
	cout<<"\033[C";
	l1.draw(0,CHAR_LEN/2+1);
}
C::C(int l, char c) {
	Line l1;
	l1.draw(0,l/2+2);
	cout<<"\033["<<l/2+1<<"D";
	l1.draw(90,l,c);
	cout<<"\033[C";
	l1.draw(0,l/2+1);
}

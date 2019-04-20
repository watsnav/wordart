#include "C.hpp"
#include <iostream>
using namespace std;
C::C() {
	Line l1;
	l1.draw(0,CHAR_LEN-1);
	cout<<"\033["<<CHAR_LEN-2<<"D";
	l1.draw();
	l1.draw(0,CHAR_LEN-1);
}
C::C(int l, char c) {
	Line l1;
	l1.draw(0,l-1,c);
	cout<<"\033["<<l-2<<"D";
	l1.draw(90,l,c);
	l1.draw(0,l-1,c);
}

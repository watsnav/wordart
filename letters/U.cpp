#include "U.hpp"
#include <iostream>
using namespace std;
U::U() {
	Line l1;
	l1.draw();
	cout<<"\033[C";
	l1.draw(0,CHAR_LEN-1);
	cout<<"\033["<<CHAR_LEN-1<<"A\033[C";
	l1.draw();
}
U::U(int l, char c) {
	Line l1;
	l1.draw(90,l,c);
	cout<<"\033[C";
	l1.draw(0,l-1,c);
	cout<<"\033["<<l-1<<"A\033[C";
	l1.draw(90,l,c);
}

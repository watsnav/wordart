#include "N.hpp"
#include <iostream>
using namespace std;
N::N() {
	Line l1;
	l1.draw();
	cout<<"\033[C\033["<<CHAR_LEN-1<<"A";
	l1.draw(135);
	cout<<"\033[C\033["<<CHAR_LEN-1<<"A";
	l1.draw();
}
N::N(int l, char c) {
	Line l1;
	l1.draw(0,l,c);
	cout<<"\033[C\033["<<l-1<<"A";
	l1.draw(135,l,c);
	cout<<"\033[C\033["<<l-1<<"A";
	l1.draw(0,l,c);
}

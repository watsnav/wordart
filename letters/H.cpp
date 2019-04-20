#include "H.hpp"
#include <iostream>
using namespace std;
H::H() {
	Line l1;
	l1.draw();
	cout<<"\033["<<CHAR_LEN/2<<"A\033[C";
	l1.draw(0,CHAR_LEN-1);
	cout<<"\033["<<CHAR_LEN-CHAR_LEN/2-1<<"A\033[C";
	l1.draw();
}
H::H(int l, char c) {
	Line l1;
	l1.draw(90,l,c);
	cout<<"\033["<<l/2<<"A\033[C";
	l1.draw(0,l-1,c);
	cout<<"\033["<<l-l/2-1<<"A\033[C";
	l1.draw();
}

#include "G.hpp"
#include <iostream>
using namespace std;
G::G() {
	Line l1;
	l1.draw();
	cout<<"\033["<<CHAR_LEN-1<<"A";
	cout<<"\033[C";
	l1.draw(0,CHAR_LEN-1);
	cout<<"\033["<<CHAR_LEN/2<<"B";
	l1.draw(0,1);
	cout<<"\033[C";
	l1.draw(90,CHAR_LEN/2);
	cout<<"\033["<<CHAR_LEN-1<<"D";
	l1.draw(0,CHAR_LEN-1);
	cout<<"\033[C";
}
G::G(int l, char c) {
	Line l1;
	l1.draw(90,l,c);
	cout<<"\033["<<l-1<<"A";
	cout<<"\033[C";
	l1.draw(0,l-1,c);
	cout<<"\033["<<l/2<<"B";
	l1.draw(0,1,c);
	cout<<"\033[C";
	l1.draw(90,l/2,c);
	cout<<"\033["<<l-1<<"D";
	l1.draw(0,l/2-1,c);
	cout<<"\033[C";
}

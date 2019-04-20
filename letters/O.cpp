#include "O.hpp"
#include <iostream>
using namespace std;
O::O() {
	Line l1;
	l1.draw();
	cout<<"\033[C";
	l1.draw(0,CHAR_LEN/2+1);
	cout<<"\033["<<CHAR_LEN/2<<"D\033["<<CHAR_LEN-1<<"A";
	l1.draw(0,CHAR_LEN/2+1);
	cout<<"\033[C";
	l1.draw();
}
O::O(int l, char c) {
	Line l1;
	l1.draw(90,l,c);
	cout<<"\033[C";
	l1.draw(0,l/2+1);
	cout<<"\033["<<l/2<<"D\033["<<l-1<<"A";
	l1.draw(0,l/2+1,c);
	cout<<"\033[C";
	l1.draw(90,l,c);
}

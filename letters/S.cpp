#include "S.hpp"
#include <iostream>
using namespace std;
S::S() {
	Line l1;
	l1.draw(0,CHAR_LEN-1);
	cout<<"\033["<<CHAR_LEN-2<<"D";
	l1.draw(90,CHAR_LEN/2);
	l1.draw(0,CHAR_LEN-2);
	cout<<"\033[C";
	l1.draw(90,CHAR_LEN-CHAR_LEN/2+1);
	cout<<"\033["<<CHAR_LEN-2<<"D";
	l1.draw(0,CHAR_LEN-1);
}
S::S(int l, char c) {
	Line l1;
	l1.draw(0,l-1,c);
	cout<<"\033["<<l-2<<"D";
	l1.draw(90,l/2,c);
	l1.draw(0,l-2,c);
	cout<<"\033[C";
	l1.draw(90,l-l/2+1,c);
	cout<<"\033["<<l-2<<"D";
	l1.draw(0,l-1,c);
}

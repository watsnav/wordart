#include "B.hpp"
#include <iostream>
using namespace std;
B::B() {
	Line l1;
	l1.draw();
	cout<<"\033["<<CHAR_LEN-1<<"A\033[C";
	l1.draw(0,CHAR_LEN/2);
	cout<<"\033[C";
	l1.draw(90,CHAR_LEN/2);
	cout<<"\033["<<CHAR_LEN/2<<"D";
	l1.draw(0,CHAR_LEN/2+2);
	cout<<"\033[B";
	l1.draw(90,CHAR_LEN-(CHAR_LEN/2));
	cout<<"\033["<<CHAR_LEN/2+1<<"D";
	l1.draw(0,CHAR_LEN/2+1);
	cout<<"\033[C";
}
B::B(int l, char c) {
	Line l1;
	l1.draw(90,l,c);
	cout<<"\033["<<l-1<<"A\033[C";
	l1.draw(0,l/2,c);
	cout<<"\033[C";
	l1.draw(90,l/2,c);
	cout<<"\033["<<l/2<<"D";
	l1.draw(0,l/2+2,c);
	cout<<"\033[B";
	l1.draw(90,l-(l/2));
	cout<<"\033["<<l/2+1<<"D";
	l1.draw(0,l/2+1,c);
	cout<<"\033[C";
}

#include "T.hpp"
#include <iostream>
using namespace std;
T::T() {
	Line l1;
	l1.draw(0,CHAR_LEN/2);
	cout<<"\033["<<2<<"C";
	l1.draw(0,CHAR_LEN/2);
	cout<<"\033["<<CHAR_LEN/2<<"D";
	l1.draw();
	cout<<"\033["<<CHAR_LEN-1<<"A\033["<<CHAR_LEN/2<<"C";
}
T::T(int l, char c) {
	Line l1;
	l1.draw(0,l/2,c);
	cout<<"\033["<<2<<"C";
	l1.draw(0,l/2,c);
	cout<<"\033["<<l/2<<"D";
	l1.draw(90,l,c);
	cout<<"\033["<<l-1<<"A\033["<<l/2<<"C";
}

#include "A.hpp"
#include <iostream>
using namespace std;
A::A() {
	Line l1;
	l1.draw(45);
	cout<<"\033["<<CHAR_LEN/2+1<<"A\033["<<CHAR_LEN/2+2<<"C";
	l1.draw(0,CHAR_LEN-1);
	cout<<"\033["<<CHAR_LEN<<"D";
	cout<<"\033["<<CHAR_LEN/2<<"A\033["<<CHAR_LEN/2<<"C";
	l1.draw(135,CHAR_LEN+1);
}
A::A(int l, char c) {
	Line l1;
	l1.draw(45,l,c);
	cout<<"\033["<<l/2+1<<"A\033["<<l/2+2<<"C";
	l1.draw(0,l-1);
	cout<<"\033["<<l<<"D";
	cout<<"\033["<<l/2<<"A\033["<<l/2<<"C";
	l1.draw(135,l+1,c);
}

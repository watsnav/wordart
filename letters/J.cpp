#include "J.hpp"
#include <iostream>
using namespace std;
J::J() {
	Line l1;
	l1.draw(0,CHAR_LEN/2);
	cout<<"\033["<<2<<"C";
	l1.draw(0,CHAR_LEN/2);
	cout<<"\033["<<CHAR_LEN/2<<"D";
	l1.draw();
	cout<<"\033["<<CHAR_LEN/2<<"D\033["<<CHAR_LEN/2-1<<"A";
	l1.draw(90,CHAR_LEN/2);
	l1.draw(0,CHAR_LEN/2);
	cout<<"\033["<<CHAR_LEN-CHAR_LEN/2+1<<"C";
}
J::J(int l, char c) {
	Line l1;
	l1.draw(0,l/2,c);
	cout<<"\033["<<2<<"C";
	l1.draw(0,l/2,c);
	cout<<"\033["<<l/2<<"D";
	l1.draw(90,l,c);
	cout<<"\033["<<l/2<<"D\033["<<l/2-1<<"A";
	l1.draw(90,l/2,c);
	l1.draw(0,l/2,c);
	cout<<"\033["<<l-l/2+1<<"C";
}

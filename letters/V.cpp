#include "V.hpp"
#include <iostream>
using namespace std;
V::V() {
	Line l1;
	l1.draw(90,CHAR_LEN/2);
	cout<<"\033["<<CHAR_LEN/2-1<<"A\033["<<CHAR_LEN<<"C";
	l1.draw(90,CHAR_LEN/2);
	cout<<"\033["<<CHAR_LEN<<"D";
	l1.draw(135,CHAR_LEN-CHAR_LEN/2+1);
	cout<<"\033["<<CHAR_LEN-CHAR_LEN/2<<"A";
	l1.draw(45,CHAR_LEN-CHAR_LEN/2+1);
	cout<<"\033["<<CHAR_LEN/2<<"C";
}
V::V(int l, char c) {
	Line l1;
	l1.draw(90,l/2,c);
	cout<<"\033["<<l/2-1<<"A\033["<<l<<"C";
	l1.draw(90,l/2,c);
	cout<<"\033["<<l<<"D";
	l1.draw(135,l-l/2+1,c);
	cout<<"\033["<<l-l/2<<"A";
	l1.draw(45,l-l/2+1,c);
	cout<<"\033["<<l/2<<"C";
}

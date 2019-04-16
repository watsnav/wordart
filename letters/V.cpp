#include "V.hpp"
#include <iostream>
using namespace std;
V::V() {
	Line l1;
	l1.draw(135);
	cout<<"\033["<<CHAR_LEN-1<<"A\033[C";
	l1.draw(45,CHAR_LEN-1);
	cout<<"\033["<<CHAR_LEN-2<<"C";
}
V::V(int l, char c) {
	Line l1;
	l1.draw(135,l,c);
	cout<<"\033["<<l-1<<"A\033[C";
	l1.draw(45,l-1,c);
	cout<<"\033["<<l-2<<"C";
}

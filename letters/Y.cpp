#include "Y.hpp"
#include <iostream>
using namespace std;
Y::Y() {
	Line l1;
	l1.draw(135,CHAR_LEN/2+1);
	cout<<"\033["<<CHAR_LEN/2<<"A";
	l1.draw(45,CHAR_LEN/2+1);
	l1.draw(90,CHAR_LEN-CHAR_LEN/2);
	cout<<"\033["<<CHAR_LEN/2<<"C";
}
Y::Y(int l, char c) {
	Line l1;
	l1.draw(135,l/2+1,c);
	cout<<"\033["<<l/2<<"A";
	l1.draw(45,l/2+1,c);
	l1.draw(90,l-l/2,c);
	cout<<"\033["<<l/2<<"C";
}

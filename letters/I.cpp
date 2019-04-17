#include "I.hpp"
#include <iostream>
using namespace std;
I::I() {
	Line l1;
	l1.draw(0,CHAR_LEN/2);
	cout<<"\033["<<2<<"C";
	l1.draw(0,CHAR_LEN/2);
	cout<<"\033["<<CHAR_LEN/2<<"D";
	l1.draw();
	cout<<"\033["<<CHAR_LEN/2<<"D";
	l1.draw(0,2*(CHAR_LEN/2)+1);
}
I::I(int l, char c) {
	Line l1;
	l1.draw(0,l/2,c);
	cout<<"\033["<<2<<"C";
	l1.draw(0,l/2,c);
	cout<<"\033["<<l/2<<"D";
	l1.draw(90,l,c);
	cout<<"\033["<<l/2<<"D";
	l1.draw(0,2*(l/2)+1);
}

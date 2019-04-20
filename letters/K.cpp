#include "K.hpp"
#include <iostream>
using namespace std;
K::K() {
	Line l1;
	l1.draw();
	cout<<"\033["<<CHAR_LEN-1<<"A\033[C";
	l1.draw(45,CHAR_LEN/2+2);
	cout<<"\033["<<3<<"A";
	l1.draw(135,CHAR_LEN-CHAR_LEN/2+2);
}
K::K(int l, char c) {
	Line l1;
	l1.draw(90,l,c);
	cout<<"\033["<<l-1<<"A\033[C";
	l1.draw(45,l/2+2,c);
	cout<<"\033["<<3<<"A";
	l1.draw(135,l-l/2+2,c);
}

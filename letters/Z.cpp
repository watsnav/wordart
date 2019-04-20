#include "Z.hpp"
#include <iostream>
using namespace std;
Z::Z() {
	Line l1;
	l1.draw(0,CHAR_LEN);
	cout<<"\033["<<CHAR_LEN-1<<"D";
	l1.draw(45);
	l1.draw(0,CHAR_LEN);
}
Z::Z(int l, char c) {
	Line l1;
	l1.draw(0,l,c);
	cout<<"\033["<<l-1<<"D";
	l1.draw(45,l,c);
	l1.draw(0,l,c);
}

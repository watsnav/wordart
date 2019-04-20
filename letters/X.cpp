#include "X.hpp"
#include <iostream>
using namespace std;
X::X() {
	Line l1;
	l1.draw(45);
	cout<<"\033["<<CHAR_LEN-1<<"A";
	l1.draw(135,CHAR_LEN);
}
X::X(int l, char c) {
	Line l1;
	l1.draw(45,l,c);
	cout<<"\033["<<l-1<<"A";
	l1.draw(135,l,c);
}

#include "D.hpp"
#include <iostream>
using namespace std;
D::D() {
	Line l1;
	l1.draw();
	cout<<"\033[C";
	l1.draw(0,CHAR_LEN-1);
	cout<<"\033["<<CHAR_LEN-1<<"D\033["<<CHAR_LEN-1<<"A";
	cout<<"\033[C";
	l1.draw(0,CHAR_LEN-1);
	cout<<"\033[C\033[B";
	l1.draw(90,CHAR_LEN-2);
	cout<<"\033[B";
}
D::D(int l, char c) {
	Line l1;
	l1.draw(90,l,c);
	cout<<"\033[C";
	l1.draw(0,l-1,c);
	cout<<"\033["<<l-1<<"D\033["<<l-1<<"A";
	cout<<"\033[C";
	l1.draw(0,l-1,c);
	cout<<"\033[C\033[B";
	l1.draw(90,l-2,c);
	cout<<"\033[B";

}

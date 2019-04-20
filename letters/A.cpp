#include "A.hpp"
#include <iostream>
using namespace std;
A::A() {
	Line l1;
	l1.draw(45,CHAR_LEN/2+1);
	l1.draw(90,CHAR_LEN-CHAR_LEN/2);
	cout<<"\033["<<CHAR_LEN-CHAR_LEN/2-1<<"A\033[C";
	l1.draw(0,CHAR_LEN-1);
	cout<<"\033["<<CHAR_LEN/2-1<<"D\033["<<CHAR_LEN/2<<"A";
	l1.draw(135,CHAR_LEN/2+1);
	l1.draw(90,CHAR_LEN-CHAR_LEN/2);
}
A::A(int l, char c) {
	Line l1;
	l1.draw(45,l/2+1,c);
	l1.draw(90,l-l/2,c);
	cout<<"\033["<<l-l/2-1<<"A\033[C";
	l1.draw(0,l-1,c);
	cout<<"\033["<<l/2-1<<"D\033["<<l/2<<"A";
	l1.draw(135,l/2+1,c);
	l1.draw(90,l-l/2,c);

}

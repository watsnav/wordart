#include "line.hpp"
#include <iostream>
using namespace std;
int main() {
	cout<<endl;
	int l = 20;
	Line l1;
	l1.draw('@',l,45);
	for(int i=0;i<=l;i++) {
		cout<<"\033[A\033[C";
		if(i==l/2) {
			cout<<"\033[C";
			l1.draw('@',l-1,0);
			for(int j=l;j>0;j--) {
				cout<<"\033[D";
			}
		}
	}
	l1.draw('@',l+1,135);
	cout<<endl;
	return 0;
}

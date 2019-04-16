#include "line.hpp"
#include <iostream>
using namespace std;
void Line::draw(int angle, int len, char ch) {
  angle %= 180;
  angle = angle / 45;
  switch (angle) {
  case 0:
    for (int i = 0; i < len; i++) {
      cout <<ch;
    }
    cout<<"\033[D";
    break;
  case 1:
    cout<<"\033["<<len-1<<"C";
    for (int i = 0; i < len; i++) {
      cout << ch; 
      if(i!=len-1)
	      cout<< "\033[B\033["<<2<<"D";
    }
    cout<<"\033[D";
    break;
  case 2:
    for (int i = 0; i < len; i++) {
      cout << ch << "\033[B\033[D";
    }
    cout<<"\033[A";
    break;
  case 3:
    for (int i = 0; i < len; i++) {
      cout << ch << "\033[B";
    }
    cout<<"\033[A\033[D";
    break;
  }
}

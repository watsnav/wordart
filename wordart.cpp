#include "wordart.hpp"
#include <iostream>
#include <string>

using namespace std;
int main(int argc, char **argv) {
	if (argc < 2) {
		printf("Usage: %s <string> [<size>]", argv[0]);
		exit(0);
	}
	string word(argv[1]);
	int len=word.length();
	cout<<"\033["<<2<<"J\033["<<2<<"H";
	int i=0;
	while(i<len) {
		switch (word[i]) {
			case 'A':
			{
				A varA;
				cout<<"\033["<<CHAR_LEN-1<<"A\033["<<2<<"C";
				break;
			}
			case 'B':
			{
				B varB;
				cout<<"\033["<<CHAR_LEN-1<<"A\033["<<2<<"C";
				break;
			}
			case 'C':
			{
				C varC;
				cout<<"\033["<<CHAR_LEN-1<<"A\033["<<2<<"C";
				break;
			}
			case 'D':
			{
				D varD;
				cout<<"\033["<<CHAR_LEN-1<<"A\033["<<2<<"C";
				break;
			}
			case 'N':
			{
				N varN;
				cout<<"\033["<<CHAR_LEN-1<<"A\033["<<2<<"C";
				break;
			}
			case 'E'://last pos is top, not bottom
			{
				E varE;
				cout<<"\033["<<2<<"C";
				break;
			}
			case 'F'://last pos is top, not bottom
			{
				F varF;
				cout<<"\033["<<2<<"C";
				break;
			}
			case 'G':
			{
				G varG;
				cout<<"\033["<<CHAR_LEN-1<<"A\033["<<2<<"C";
				break;
			}
			case 'H':
			{
				H varH;
				cout<<"\033["<<CHAR_LEN-1<<"A\033["<<2<<"C";
				break;
			}
			case 'I':
			{
				I varI;
				cout<<"\033["<<CHAR_LEN-1<<"A\033["<<2<<"C";
				break;
			}
			case 'J':
			{
				J varJ;
				cout<<"\033["<<CHAR_LEN-1<<"A\033["<<2<<"C";
				break;
			}
			case 'K':
			{
				K varK;
				cout<<"\033["<<CHAR_LEN-1<<"A\033["<<2<<"C";
				break;
			}
			case 'L':
			{
				L varL;
				cout<<"\033["<<CHAR_LEN-1<<"A\033["<<2<<"C";
				break;
			}
			case 'M':
			{
				M varM;
				cout<<"\033["<<CHAR_LEN-1<<"A\033["<<2<<"C";
				break;
			}
			case 'O':
			{
				O varO;
				cout<<"\033["<<CHAR_LEN-1<<"A\033["<<2<<"C";
				break;
			}
			case 'P':
			{
				P varP;
				cout<<"\033["<<CHAR_LEN-1<<"A\033["<<2<<"C";
				break;
			}
			case 'Q':
			{
				Q varQ;
				cout<<"\033["<<CHAR_LEN-1<<"A\033["<<2<<"C";
				break;
			}
			case 'R':
			{
				R varR;
				cout<<"\033["<<CHAR_LEN-1<<"A\033["<<2<<"C";
				break;
			}
			case 'S':
			{
				S varS;
				cout<<"\033["<<CHAR_LEN-1<<"A\033["<<2<<"C";
				break;
			}
			case 'T'://last pos is top, not bottom
			{
				T varT;
				cout<<"\033["<<2<<"C";
				break;
			}
			case 'U':
			{
				U varU;
				cout<<"\033["<<CHAR_LEN-1<<"A\033["<<2<<"C";
				break;
			}
			case 'V':
			{
				V varV;
				cout<<"\033["<<CHAR_LEN-1<<"A\033["<<2<<"C";
				break;
			}
			case 'W':
			{
				W varW;
				cout<<"\033["<<CHAR_LEN-1<<"A\033["<<2<<"C";
				break;
			}
			case 'X':
			{
				X varX;
				cout<<"\033["<<CHAR_LEN-1<<"A\033["<<2<<"C";
				break;
			}
			case 'Y':
			{
				Y varY;
				cout<<"\033["<<CHAR_LEN-1<<"A\033["<<2<<"C";
				break;
			}
			case 'Z':
			{
				Z varZ;
				cout<<"\033["<<CHAR_LEN-1<<"A\033["<<2<<"C";
				break;
			}
			default:
				cout <<"No match!"<<endl;
		}
		i++;
        }
	cout<<"\033["<<CHAR_LEN+3<<"E";

	return 0;
}

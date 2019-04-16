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
			case 'N':
			{
				N varN;
				cout<<"\033["<<CHAR_LEN-1<<"A\033["<<2<<"C";
				break;
			}
			case 'V':
			{
				V varV;
				cout<<"\033["<<CHAR_LEN-2<<"A\033["<<2<<"C";
				break;
			}
			case 'E':
			{
				E varE;
				cout<<"\033["<<2<<"C";
				break;
			}
			case 'T':
			{
				T varT;
				cout<<"\033["<<2<<"C";
				break;
			}
			default:
				cout <<"No match!"<<endl;
		}
		i++;
        }
	cout<<"\033["<<CHAR_LEN+1<<"E";

	return 0;
}

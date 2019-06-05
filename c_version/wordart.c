#include "utils.h"
#include "wordart.h"

int main(int argc, char **argv) {
	if (argc < 2) {
		printf("Usage: %s <string> [<size>]", argv[0]);
		exit(0);
	}
	for(int wordi=1; wordi<argc; wordi++) {
		char *word = argv[wordi];
		unsigned len=strlen(word);
		unsigned i=0;
		// allocate array of letter pointers
		char ***artword=(char***)malloc(sizeof(char**)*len);
		for (i=0;i<len;i++)
			artword[i]= (char **) malloc(sizeof(char*)); 
		i=0;
		char **letter;
		unsigned *ind = (unsigned*)malloc(sizeof(unsigned)*4);
		while(i<len) {
			// allocate array of char pointers
			letter= (char **) malloc(sizeof(char *)*CHAR_LEN);
			for (int j=0;j<=CHAR_LEN;j++)
				letter[j]= (char *) malloc(sizeof(char)*(CHAR_LEN+1)); //extra size for storing \0
			artword[i] =letter;
			switch (word[i]) {
				case 'A':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					// |
					setind(ind,1,0,CHAR_LEN-1,0); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// | |
					setind(ind,1,CHAR_LEN-1,CHAR_LEN-1,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// |-|
					setind(ind,CHAR_LEN/2,1,CHAR_LEN/2,CHAR_LEN-2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// A
					setind(ind,0,1,0,CHAR_LEN-2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'B':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					// |
					setind(ind,0,0,CHAR_LEN-1,0); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// |`
					setind(ind,0,1,0,CHAR_LEN-2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// |`|
					setind(ind,1,CHAR_LEN-1,CHAR_LEN/2-1,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					setind(ind,CHAR_LEN/2+1,CHAR_LEN-1,CHAR_LEN-2,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// B
					setind(ind,CHAR_LEN/2,1,CHAR_LEN/2,CHAR_LEN-2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					setind(ind,CHAR_LEN-1,1,CHAR_LEN-1,CHAR_LEN-2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'C':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					// |
					setind(ind,1,0,CHAR_LEN-2,0); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// C
					setind(ind,0,1,0,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					setind(ind,CHAR_LEN-1,1,CHAR_LEN-1,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'D':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					// |
					setind(ind,0,0,CHAR_LEN-1,0); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// | |
					setind(ind,1,CHAR_LEN-1,CHAR_LEN-2,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// D
					setind(ind,0,1,0,CHAR_LEN-2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					setind(ind,CHAR_LEN-1,1,CHAR_LEN-1,CHAR_LEN-2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'E':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					// |
					setind(ind,0,0,CHAR_LEN-1,0); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// E
					setind(ind,0,1,0,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					setind(ind,CHAR_LEN/2,1,CHAR_LEN/2,CHAR_LEN-2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					setind(ind,CHAR_LEN-1,1,CHAR_LEN-1,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'F':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					// |
					setind(ind,0,0,CHAR_LEN-1,0); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// F
					setind(ind,0,1,0,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					setind(ind,CHAR_LEN/2,1,CHAR_LEN/2,CHAR_LEN-2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'G':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					// |
					setind(ind,1,0,CHAR_LEN-2,0); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// C
					setind(ind,0,1,0,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					setind(ind,CHAR_LEN-1,1,CHAR_LEN-1,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// C|
					setind(ind,CHAR_LEN/2,CHAR_LEN-1,CHAR_LEN-2,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// G
					setind(ind,CHAR_LEN/2,CHAR_LEN-2,CHAR_LEN/2,CHAR_LEN-2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'H':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					// |
					setind(ind,0,0,CHAR_LEN-1,0); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// | |
					setind(ind,0,CHAR_LEN-1,CHAR_LEN-1,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// H
					setind(ind,CHAR_LEN/2,1,CHAR_LEN/2,CHAR_LEN-2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'I':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					//  |
					setind(ind,1,CHAR_LEN/2,CHAR_LEN-2,CHAR_LEN/2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// I
					setind(ind,0,0,0,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					setind(ind,CHAR_LEN-1,0,CHAR_LEN-1,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'J':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					// `
					setind(ind,0,0,0,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// J
					setind(ind,1,CHAR_LEN/2+1,CHAR_LEN-2,CHAR_LEN/2+1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					setind(ind,CHAR_LEN-1,1,CHAR_LEN-1,CHAR_LEN/2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					setind(ind,CHAR_LEN-3,0,CHAR_LEN-2,0); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'K':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					// |
					setind(ind,0,0,CHAR_LEN-1,0); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// K
					for(unsigned k=0;k<=CHAR_LEN/2;k++) {
						setind(ind,k,CHAR_LEN/2+1-k,k,CHAR_LEN/2+1-k); //remember not to send CHAR_LEN as arg
						letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					}
					for(unsigned k=CHAR_LEN/3;k<CHAR_LEN;k++) {
						setind(ind,k,k,k,k); //remember not to send CHAR_LEN as arg
						letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					}
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'L':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					// |
					setind(ind,0,0,CHAR_LEN-1,0); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// L 
					setind(ind,CHAR_LEN-1,1,CHAR_LEN-1,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'M':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					// |
					setind(ind,0,0,CHAR_LEN-1,0); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// | |
					setind(ind,0,CHAR_LEN-1,CHAR_LEN-1,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// M
					for(unsigned m=1;m<=CHAR_LEN/2;m++) {
						setind(ind,m,m,m,m); //remember not to send CHAR_LEN as arg
						letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					}
					for(unsigned m=1;m<=CHAR_LEN/2;m++) {
						setind(ind,m,CHAR_LEN-1-m,m,CHAR_LEN-1-m); //remember not to send CHAR_LEN as arg
						letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					}
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'N':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					// |
					setind(ind,0,0,CHAR_LEN-1,0); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// | |
					setind(ind,0,CHAR_LEN-1,CHAR_LEN-1,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// N
					for(unsigned n=1;n<CHAR_LEN-1;n++) {
						setind(ind,n,n,n,n); //remember not to send CHAR_LEN as arg
						letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					}
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'O':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					// |
					setind(ind,1,0,CHAR_LEN-2,0); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// | |
					setind(ind,1,CHAR_LEN-1,CHAR_LEN-2,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// O
					setind(ind,0,1,0,CHAR_LEN-2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					setind(ind,CHAR_LEN-1,1,CHAR_LEN-1,CHAR_LEN-2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'P':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					// |
					setind(ind,0,0,CHAR_LEN-1,0); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// |` 
					setind(ind,0,1,0,CHAR_LEN-2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// P
					setind(ind,1,CHAR_LEN-1,CHAR_LEN/2-1,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					setind(ind,CHAR_LEN/2,1,CHAR_LEN/2,CHAR_LEN-2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'Q':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					// |
					setind(ind,1,0,CHAR_LEN-3,0); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// | |
					setind(ind,1,CHAR_LEN-2,CHAR_LEN-3,CHAR_LEN-2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// O
					setind(ind,0,1,0,CHAR_LEN-3); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					setind(ind,CHAR_LEN-2,1,CHAR_LEN-2,CHAR_LEN-3); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// Q
					for(unsigned q=CHAR_LEN-4;q<CHAR_LEN;q++) {
						setind(ind,q,q,q,q); //remember not to send CHAR_LEN as arg
						letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					}
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'R':
				{	//initialize array with spaces
					letter = fillarr_def(letter);
					// |
					setind(ind,0,0,CHAR_LEN-1,0); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// |` 
					setind(ind,0,1,0,CHAR_LEN-2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// P
					setind(ind,1,CHAR_LEN-1,CHAR_LEN/2-1,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					setind(ind,CHAR_LEN/2,1,CHAR_LEN/2,CHAR_LEN-2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// R
					unsigned tmp=2;
					for(unsigned r=CHAR_LEN/2;r<CHAR_LEN;r++) {
						setind(ind,r,tmp,r,tmp); //remember not to send CHAR_LEN as arg
						letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
						tmp++;
					}
					
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'S':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					// S
					setind(ind,0,1,0,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					setind(ind,1,0,CHAR_LEN/2-1,0); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					setind(ind,CHAR_LEN/2,1,CHAR_LEN/2,CHAR_LEN-2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					setind(ind,CHAR_LEN/2+1,CHAR_LEN-1,CHAR_LEN-2,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					setind(ind,CHAR_LEN-1,0,CHAR_LEN-1,CHAR_LEN-2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'T':
				{	//initialize array with spaces
					letter = fillarr_def(letter);
					//  |
					setind(ind,1,CHAR_LEN/2,CHAR_LEN-1,CHAR_LEN/2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// T
					setind(ind,0,0,0,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'U':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					// |
					setind(ind,0,0,CHAR_LEN-2,0); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// | |
					setind(ind,0,CHAR_LEN-1,CHAR_LEN-2,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// U
					setind(ind,CHAR_LEN-1,1,CHAR_LEN-1,CHAR_LEN-2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'V':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					// |
					setind(ind,0,0,CHAR_LEN/2,0); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// | |
					setind(ind,0,CHAR_LEN-1,CHAR_LEN/2,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// V
					unsigned tmp=1;
					for(unsigned v=CHAR_LEN/2+1;v<CHAR_LEN;v++) {
						setind(ind,v,tmp,v,tmp); //remember not to send CHAR_LEN as arg
						letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
						tmp++;
					}
					tmp=CHAR_LEN/2;
					for(unsigned v=CHAR_LEN-1;v>CHAR_LEN/2;v--) {
						setind(ind,v,tmp,v,tmp); //remember not to send CHAR_LEN as arg
						letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
						tmp++;
					}
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'W':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					// |
					setind(ind,0,0,CHAR_LEN-1,0); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// | |
					setind(ind,0,CHAR_LEN-1,CHAR_LEN-1,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// W
					unsigned tmp=1;
					for(unsigned v=CHAR_LEN-2;v>=CHAR_LEN/2;v--) {
						setind(ind,v,tmp,v,tmp); //remember not to send CHAR_LEN as arg
						letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
						tmp++;
					}
					tmp=CHAR_LEN/2;
					for(unsigned v=CHAR_LEN/2;v<CHAR_LEN;v++) {
						setind(ind,v,tmp,v,tmp); //remember not to send CHAR_LEN as arg
						letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
						tmp++;
					}
	
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'X':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					// X
					for(unsigned n=0;n<CHAR_LEN;n++) {
						setind(ind,n,n,n,n); //remember not to send CHAR_LEN as arg
						letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					}
					for(unsigned n=0;n<CHAR_LEN;n++) {
						setind(ind,n,CHAR_LEN-1-n,n,CHAR_LEN-1-n); //remember not to send CHAR_LEN as arg
						letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					}
	
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'Y':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					// v
					for(unsigned m=0;m<=CHAR_LEN/2;m++) {
						setind(ind,m,m,m,m); //remember not to send CHAR_LEN as arg
						letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					}
					for(unsigned m=0;m<=CHAR_LEN/2;m++) {
						setind(ind,m,CHAR_LEN-1-m,m,CHAR_LEN-1-m); //remember not to send CHAR_LEN as arg
						letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					}
					// Y
					setind(ind,CHAR_LEN/2,CHAR_LEN/2,CHAR_LEN-1,CHAR_LEN/2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'Z':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					// /
					for(unsigned n=0;n<CHAR_LEN;n++) {
						setind(ind,n,CHAR_LEN-1-n,n,CHAR_LEN-1-n); //remember not to send CHAR_LEN as arg
						letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					}
					// Z
					setind(ind,0,0,0,CHAR_LEN-2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					setind(ind,CHAR_LEN-1,0,CHAR_LEN-1,CHAR_LEN-2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				case 'a':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					// |
					setind(ind,1,0,CHAR_LEN-1,0); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// | |
					setind(ind,1,CHAR_LEN-1,CHAR_LEN-1,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// |-|
					setind(ind,CHAR_LEN/2,1,CHAR_LEN/2,CHAR_LEN-2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// A
					setind(ind,0,1,0,CHAR_LEN-2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'b':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					// |
					setind(ind,0,0,CHAR_LEN-1,0); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// |`
					setind(ind,0,1,0,CHAR_LEN-2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// |`|
					setind(ind,1,CHAR_LEN-1,CHAR_LEN/2-1,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					setind(ind,CHAR_LEN/2+1,CHAR_LEN-1,CHAR_LEN-2,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// B
					setind(ind,CHAR_LEN/2,1,CHAR_LEN/2,CHAR_LEN-2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					setind(ind,CHAR_LEN-1,1,CHAR_LEN-1,CHAR_LEN-2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'c':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					// |
					setind(ind,1,0,CHAR_LEN-2,0); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// C
					setind(ind,0,1,0,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					setind(ind,CHAR_LEN-1,1,CHAR_LEN-1,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'd':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					// |
					setind(ind,0,0,CHAR_LEN-1,0); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// | |
					setind(ind,1,CHAR_LEN-1,CHAR_LEN-2,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// D
					setind(ind,0,1,0,CHAR_LEN-2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					setind(ind,CHAR_LEN-1,1,CHAR_LEN-1,CHAR_LEN-2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'e':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					// |
					setind(ind,0,0,CHAR_LEN-1,0); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// E
					setind(ind,0,1,0,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					setind(ind,CHAR_LEN/2,1,CHAR_LEN/2,CHAR_LEN-2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					setind(ind,CHAR_LEN-1,1,CHAR_LEN-1,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'f':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					// |
					setind(ind,0,0,CHAR_LEN-1,0); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// F
					setind(ind,0,1,0,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					setind(ind,CHAR_LEN/2,1,CHAR_LEN/2,CHAR_LEN-2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'g':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					// |
					setind(ind,1,0,CHAR_LEN-2,0); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// C
					setind(ind,0,1,0,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					setind(ind,CHAR_LEN-1,1,CHAR_LEN-1,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// C|
					setind(ind,CHAR_LEN/2,CHAR_LEN-1,CHAR_LEN-2,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// G
					setind(ind,CHAR_LEN/2,CHAR_LEN-2,CHAR_LEN/2,CHAR_LEN-2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'h':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					// |
					setind(ind,0,0,CHAR_LEN-1,0); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// | |
					setind(ind,0,CHAR_LEN-1,CHAR_LEN-1,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// H
					setind(ind,CHAR_LEN/2,1,CHAR_LEN/2,CHAR_LEN-2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'i':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					//  |
					setind(ind,1,CHAR_LEN/2,CHAR_LEN-2,CHAR_LEN/2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// I
					setind(ind,0,0,0,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					setind(ind,CHAR_LEN-1,0,CHAR_LEN-1,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'j':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					// `
					setind(ind,0,0,0,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// J
					setind(ind,1,CHAR_LEN/2+1,CHAR_LEN-2,CHAR_LEN/2+1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					setind(ind,CHAR_LEN-1,1,CHAR_LEN-1,CHAR_LEN/2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					setind(ind,CHAR_LEN-3,0,CHAR_LEN-2,0); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'k':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					// |
					setind(ind,0,0,CHAR_LEN-1,0); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// K
					for(unsigned k=0;k<=CHAR_LEN/2;k++) {
						setind(ind,k,CHAR_LEN/2+1-k,k,CHAR_LEN/2+1-k); //remember not to send CHAR_LEN as arg
						letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					}
					for(unsigned k=CHAR_LEN/3;k<CHAR_LEN;k++) {
						setind(ind,k,k,k,k); //remember not to send CHAR_LEN as arg
						letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					}
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'l':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					// |
					setind(ind,0,0,CHAR_LEN-1,0); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// L 
					setind(ind,CHAR_LEN-1,1,CHAR_LEN-1,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'm':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					// |
					setind(ind,0,0,CHAR_LEN-1,0); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// | |
					setind(ind,0,CHAR_LEN-1,CHAR_LEN-1,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// M
					for(unsigned m=1;m<=CHAR_LEN/2;m++) {
						setind(ind,m,m,m,m); //remember not to send CHAR_LEN as arg
						letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					}
					for(unsigned m=1;m<=CHAR_LEN/2;m++) {
						setind(ind,m,CHAR_LEN-1-m,m,CHAR_LEN-1-m); //remember not to send CHAR_LEN as arg
						letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					}
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'n':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					// |
					setind(ind,0,0,CHAR_LEN-1,0); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// | |
					setind(ind,0,CHAR_LEN-1,CHAR_LEN-1,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// N
					for(unsigned n=1;n<CHAR_LEN-1;n++) {
						setind(ind,n,n,n,n); //remember not to send CHAR_LEN as arg
						letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					}
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'o':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					// |
					setind(ind,1,0,CHAR_LEN-2,0); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// | |
					setind(ind,1,CHAR_LEN-1,CHAR_LEN-2,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// O
					setind(ind,0,1,0,CHAR_LEN-2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					setind(ind,CHAR_LEN-1,1,CHAR_LEN-1,CHAR_LEN-2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'p':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					// |
					setind(ind,0,0,CHAR_LEN-1,0); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// |` 
					setind(ind,0,1,0,CHAR_LEN-2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// P
					setind(ind,1,CHAR_LEN-1,CHAR_LEN/2-1,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					setind(ind,CHAR_LEN/2,1,CHAR_LEN/2,CHAR_LEN-2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'q':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					// |
					setind(ind,1,0,CHAR_LEN-3,0); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// | |
					setind(ind,1,CHAR_LEN-2,CHAR_LEN-3,CHAR_LEN-2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// O
					setind(ind,0,1,0,CHAR_LEN-3); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					setind(ind,CHAR_LEN-2,1,CHAR_LEN-2,CHAR_LEN-3); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// Q
					for(unsigned q=CHAR_LEN-4;q<CHAR_LEN;q++) {
						setind(ind,q,q,q,q); //remember not to send CHAR_LEN as arg
						letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					}
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'r':
				{	//initialize array with spaces
					letter = fillarr_def(letter);
					// |
					setind(ind,0,0,CHAR_LEN-1,0); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// |` 
					setind(ind,0,1,0,CHAR_LEN-2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// P
					setind(ind,1,CHAR_LEN-1,CHAR_LEN/2-1,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					setind(ind,CHAR_LEN/2,1,CHAR_LEN/2,CHAR_LEN-2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// R
					unsigned tmp=2;
					for(unsigned r=CHAR_LEN/2;r<CHAR_LEN;r++) {
						setind(ind,r,tmp,r,tmp); //remember not to send CHAR_LEN as arg
						letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
						tmp++;
					}
					
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 's':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					// S
					setind(ind,0,1,0,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					setind(ind,1,0,CHAR_LEN/2-1,0); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					setind(ind,CHAR_LEN/2,1,CHAR_LEN/2,CHAR_LEN-2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					setind(ind,CHAR_LEN/2+1,CHAR_LEN-1,CHAR_LEN-2,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					setind(ind,CHAR_LEN-1,0,CHAR_LEN-1,CHAR_LEN-2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 't':
				{	//initialize array with spaces
					letter = fillarr_def(letter);
					//  |
					setind(ind,1,CHAR_LEN/2,CHAR_LEN-1,CHAR_LEN/2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// T
					setind(ind,0,0,0,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'u':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					// |
					setind(ind,0,0,CHAR_LEN-2,0); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// | |
					setind(ind,0,CHAR_LEN-1,CHAR_LEN-2,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// U
					setind(ind,CHAR_LEN-1,1,CHAR_LEN-1,CHAR_LEN-2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'v':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					// |
					setind(ind,0,0,CHAR_LEN/2,0); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// | |
					setind(ind,0,CHAR_LEN-1,CHAR_LEN/2,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// V
					unsigned tmp=1;
					for(unsigned v=CHAR_LEN/2+1;v<CHAR_LEN;v++) {
						setind(ind,v,tmp,v,tmp); //remember not to send CHAR_LEN as arg
						letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
						tmp++;
					}
					tmp=CHAR_LEN/2;
					for(unsigned v=CHAR_LEN-1;v>CHAR_LEN/2;v--) {
						setind(ind,v,tmp,v,tmp); //remember not to send CHAR_LEN as arg
						letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
						tmp++;
					}
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'w':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					// |
					setind(ind,0,0,CHAR_LEN-1,0); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// | |
					setind(ind,0,CHAR_LEN-1,CHAR_LEN-1,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					// W
					unsigned tmp=1;
					for(unsigned v=CHAR_LEN-2;v>=CHAR_LEN/2;v--) {
						setind(ind,v,tmp,v,tmp); //remember not to send CHAR_LEN as arg
						letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
						tmp++;
					}
					tmp=CHAR_LEN/2;
					for(unsigned v=CHAR_LEN/2;v<CHAR_LEN;v++) {
						setind(ind,v,tmp,v,tmp); //remember not to send CHAR_LEN as arg
						letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
						tmp++;
					}
	
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'x':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					// X
					for(unsigned n=0;n<CHAR_LEN;n++) {
						setind(ind,n,n,n,n); //remember not to send CHAR_LEN as arg
						letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					}
					for(unsigned n=0;n<CHAR_LEN;n++) {
						setind(ind,n,CHAR_LEN-1-n,n,CHAR_LEN-1-n); //remember not to send CHAR_LEN as arg
						letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					}
	
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'y':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					// v
					for(unsigned m=0;m<=CHAR_LEN/2;m++) {
						setind(ind,m,m,m,m); //remember not to send CHAR_LEN as arg
						letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					}
					for(unsigned m=0;m<=CHAR_LEN/2;m++) {
						setind(ind,m,CHAR_LEN-1-m,m,CHAR_LEN-1-m); //remember not to send CHAR_LEN as arg
						letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					}
					// Y
					setind(ind,CHAR_LEN/2,CHAR_LEN/2,CHAR_LEN-1,CHAR_LEN/2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}
				case 'z':
				{
					//initialize array with spaces
					letter = fillarr_def(letter);
					// /
					for(unsigned n=0;n<CHAR_LEN;n++) {
						setind(ind,n,CHAR_LEN-1-n,n,CHAR_LEN-1-n); //remember not to send CHAR_LEN as arg
						letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					}
					// Z
					setind(ind,0,0,0,CHAR_LEN-2); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					setind(ind,CHAR_LEN-1,0,CHAR_LEN-1,CHAR_LEN-1); //remember not to send CHAR_LEN as arg
					letter = fillarr(letter,ind,CHAR_LEN-1,CHARACTER);
					
					if(letter==NULL) {
						printf("errors in fillarr, bugs here...!");
						exit(-1);
					}
					break;
				}	
				}
				default:
					printf("No match!");
			}
			i++;
        	}
		showarr_def(len,artword);
		printf("\n\n");
		free(artword);
		free(letter);
	}
	return 0;
}

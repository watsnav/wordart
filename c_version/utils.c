#include "utils.h"
char** fillarr(char **a, unsigned *indices, unsigned size, char filler) {
	/**a--> pointer to letter square array
	 * size--> size of the array 'a' must be 1 less than
	 * filler--> character to be filled in array a
	 * indices--> pointer to array of 4 int containing indices of subarray to be filled
	 * indices[0]:row1 [1]:col1 [2]:row2 [3]:col2
	 */
	if (a==NULL) return NULL;
	if(indices==NULL) {
		indices = (unsigned*) malloc(sizeof(unsigned)*4);
		indices[0] = 0;
		indices[1] = 0;
		indices[2] = size-1;
		indices[3] = size-1;
	}
	if(size < indices[2] || size < indices[3])
		return NULL;
	for(unsigned i=indices[0];i<=indices[2];i++) {
		for(unsigned j=indices[1];j<=indices[3];j++) {
			a[i][j] = filler;
		}
	}
	return a;
}

void showarr(unsigned n, char ***word, unsigned size) {
	/**This function concats letters arrays and prints unified word line by line
	 * n--> #of letters in word
	 * word--> space separated pointers to letters initial position 
	 * size--> size of the letter arrays
	 */
	for(unsigned i=0;i<size;i++) {
		for(unsigned j=0;j<n;j++) {
			printf("%s  ",*(word[j]+i));
		}
		printf("\n");
	}
}
char** fillarr_def(char **a) {
	return fillarr(a,NULL,CHAR_LEN,' ');
}
void showarr_def(unsigned n, char ***a) {
	showarr(n,a,CHAR_LEN);
}

void setind(unsigned *ind, unsigned r1,unsigned c1,unsigned r2,unsigned c2) {
	ind[0] = r1;
	ind[1] = c1;
	ind[2] = r2;
	ind[3] = c2;
}

/* caesar - takes a string and computes the 94 different
 * possible rotations of a caesar cipher. 
 * Author: retired_millenial */
#include <stdio.h>
#include <string.h>
#define ARG_MAX 262144
int main(int argc, char **argv) {
	int c,i,j;
	if(argc != 2) {
		fprintf(stderr, "usage: %s <string>\n", argv[0]);
		return 1;
	}
	for(i=0; i<94;i++) {
		printf("offset %d: ", i);
		for(j=0;j<strnlen(argv[1], ARG_MAX);j++) {
			c = argv[1][j];
			c += i;
			if (c > 126) {
				c = c % 126;
				c += 32;
			}
			printf("%c", c);
		}
		putchar('\n');
	}
	return 0;
}

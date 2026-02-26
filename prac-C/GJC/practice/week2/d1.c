#include <stdio.h>

int main(){

	int src,dst;
	int quotient, remainder;

	src = 22;
	dst = 8;
	printf("2 Integers = %d %d\n",src, dst);

	quotient = src/dst;
	printf("Quotient = %d\n", quotient);

	remainder = src - (dst* quotient);
	printf("Remainder = %d\n",remainder);

	printf("src %% dst = %d\n", src%dst);

	return 0;
}

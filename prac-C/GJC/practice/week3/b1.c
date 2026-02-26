#include <stdio.h>

int main()
{
	float f = 0.123456789;
	double d = 0.123456789;
	char c; short a; int k;

	printf("char    : %ld bytes\n", sizeof(c));
	printf("int     : %ld bytes\n", sizeof(k));
	printf("float   : %ld bytes\n", sizeof(f));
	printf("float   : %ld bytes\n", sizeof(float));
	printf("double  : %ld bytes\n", sizeof(double));


	printf("f : %.10f \n",f);
	printf("d : %.10lf \n",d);
	printf("f : %10.2f \n",f);
	printf("d : %10.5lf \n",d);

	return 0;
}


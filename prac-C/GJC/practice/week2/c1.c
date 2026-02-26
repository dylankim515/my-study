#include <stdio.h>

int main(){
	int I;
	char C;
	float F;
	double D;

	printf("Before I : %d\n",I);
	printf("Before C : %c\n",C);
	printf("Before F : %f\n",F);
	printf("Before D : %lf\n",D);
	
	I = 10;
	C = 'A';
	F = 7.141;
	D = 3.1415926;


	printf("After I : %d\n",I);
	printf("After C : %c\n",C);
	printf("After F : %f\n",F);
	printf("After D : %lf\n",D);

	return 0;
}



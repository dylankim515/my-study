#include <stdio.h>
#include <math.h>

#define PI 3.141592

int main()
{
	int degree;
	double radian, result;

	printf("degree : ");
	scanf("%d",&degree);

	radian = degree*PI/180;

	printf("sin(%d) : %f\n",degree,sin(radian));
	printf("cos(%d) : %f\n", degree, cos(radian));
	printf("tan(%d) : %f\n", degree, cos(radian));

	result = sqrt(pow(sin(radian),2) + pow(cos(radian),2));
	printf("sqrt(sin(%d)^2 + cos(%d)^2) : %f\n",degree, degree, result);
}


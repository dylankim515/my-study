#include <stdio.h>

int main()
{
	double pi = 3.141592;
	printf("%s\n", "pi is approximately : ");
	printf("%4.2f\n",pi);
	printf("%-12.10lf\n",pi);

	return 0;
}


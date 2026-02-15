#include <stdio.h>

int main()
{
	int x,y;
	x=10, y=5;

	printf("\t\tTrue(1)/False(0)\n");
	printf("x > y : \t\t%d\n", x>y);
	printf("x < y : \t\t%d\n\n", x<y);

	printf("x > y && x < y : \t%d\n", x>y && x<y);
	printf("x > y || x < y : \t%d\n", x>y || x<y);

	printf("!(x>y) : \t\t%d\n", !(x>y));

	return 0;
}




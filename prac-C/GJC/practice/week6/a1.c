#include <stdio.h>

int main()
{
	int i,num;

	printf("number : ");
	scanf("%d", &num);

	for (i=1;i<=num;i++)
		printf("*");

	printf("\n");

	return 0;
}


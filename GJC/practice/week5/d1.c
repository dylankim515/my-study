#include <stdio.h>
int main()
{
	int val;

	printf("Input an integer :");
	scanf("%d",&val);

	printf("print in reverse order: ");

	for (;val>0;)
	{
		printf("%d",val%10);
		val/=10;
	}

	printf("\n");	return 0;
}

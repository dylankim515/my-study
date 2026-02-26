#include <stdio.h>

int main()
{
	int i,j,k;

	for (i=0;i<10;i++)
	{
		for (j=0;j<=i;j++)
		{
			printf("*");
		}
		for (k=0;k<10-i;k++)
		{
			printf("@");
		}
		printf("\n");
	}
	return 0;
}


#include <stdio.h>

int main()
{
	int i,j;

	for (i=0;i<10;i++)
	{
		for (j=1;j<=10-i;j++)
		{
			printf("%d ",j);
		}

		printf("\n");
	}
	return 0;
}



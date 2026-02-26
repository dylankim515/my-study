#include <stdio.h>

int main()
{
	int i,j,num;

	printf("Enter the number N : ");
	scanf("%d",&num);
	int n=1;

	for (i=0;i<num;i++)
	{
		for (j=0;j<=i;j++)
		{
			printf("%2d",n);
			n++;
		}
		printf("\n");
		
	}

	return 0;
}




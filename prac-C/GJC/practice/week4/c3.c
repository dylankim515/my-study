#include <stdio.h>

int main()
{
	int a,b,c;
	printf("3 Sides of Triangle(A B C): ");
	scanf("%d %d %d",&a,&b,&c);

	if (a<b+c && b<a+c && c<a+b)
	{
		printf("This is a Triangle.\nLongest Side: ");
		
		if (a>b)
		{
			if (a>c)
			{
				printf("A\n");
			}
			else
			{
				printf("C\n");
			}
		}
		else
		{
			if (b>c)
			{
				printf("B\n");
			}
			else
			{
				printf("C\n");
			}
		}
	}
	else
	{
		printf("This is not a Triangle.\n");
	}

	return 0;
}


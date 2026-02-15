#include <stdio.h>

int main()
{
	int i,j,a;

	while(1)
	{
		printf("자연수 a : ");
		scanf("%d",&a);

		if (a<0)
		{
			break;
		}
		else
		{
			for (i=1;i<=a;i++)
			{
				if (a%i==0)
				{
						printf("%d\t",i);
				}
			}
			
				printf("\n");

		}
	
	}
	return 0;
}


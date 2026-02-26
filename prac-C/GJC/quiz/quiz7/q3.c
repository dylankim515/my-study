#include <stdio.h>

int main()
{
	int i,N;

	scanf("%d",&N);
	printf("Closest Prime : ");
	i = N;
	int j;
	int flag=0;
	while(1)
	{
		flag=1;
		for (j=2;j<i;j++)
		{
			if (i%j==0)
			{
				flag=0;
			}
		}
		
		if (flag==1)
		{
			printf("%d\n",i);
			break;
		}
		i++;
	}
	
	return 0;
}


			

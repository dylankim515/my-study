#include <stdio.h>

int main()
{
	int A, temp,i;

	printf("number : ");
	scanf("%d",&A);
	
	int sum=0;
	
	printf("숫자별 포함된 5의 개수 :");

	for (i=1;i<=A;i++)
	{	
		sum=0;

		temp = i;
		while(temp>0)
		{
			if (temp%10 == 5)
			{
				sum+=1;
			}
			temp/=10;
		}

		if (sum>0)
		{
			printf("%d(%d개) ",i,sum);
		}
	}
	printf("\n");
	return 0;
}



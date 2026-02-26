#include <stdio.h>

int prime(int m)
{
	int i,flag;
	flag=1;
	for (i=2;i<m;i++)
	{
		if (m%i==0)
		{
			flag=0;
			break;
		}
	}
	
	return flag;
}
			

int main()
{	
	int num;
	int i;

	printf("Enter the N : ");
	scanf("%d",&num);
	
	printf("From 1 to %d, Prime number :\n",num);
	for (i=2;i<=num;i++)
	{
		if (prime(i) == 1)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}




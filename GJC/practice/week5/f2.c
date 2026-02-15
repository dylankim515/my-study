#include <stdio.h>

int main()
{
	int num;
	printf("number : ");
	scanf("%d",&num);
	
	while(num>0)
	{
		if (num%5==0)
		{
			printf("%d is a multiple of 5\n",num);
		}
		num--;
	}
	
	return 0;
}


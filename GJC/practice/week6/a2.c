#include <stdio.h>

int main()
{
	int num;

	printf("2 & 3 common multiples: ");
	for (num=1;num<=100;num++)
	{
		if (num%2==0 && num%3==0)
		{
			printf("%d ",num);
		}
	}
	printf("\n");

	return 0;
}


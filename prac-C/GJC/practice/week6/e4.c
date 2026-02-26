#include <stdio.h>

int main()
{
	int num;

	printf("Enter an integer : ");
	scanf("%d",&num);

	while(1)
	{
		if (num == 1)
		{
			break;
		}

		if (num%2==0)
		{
			num=num /2;
		}
		else
		{
			num= 3*num +1;
		}
		
		printf("%d  ",num);

	}
	printf("\nCollatz sequence arrived at 1!\n");

	return 0;
}




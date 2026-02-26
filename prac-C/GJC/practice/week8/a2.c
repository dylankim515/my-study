#include <stdio.h>

int isEven(int num);

int main()
{
	int num;
	printf("num : ");
	scanf("%d",&num);

	switch(isEven(num))
	{
		case 0:
			printf("%d is odd\n",num);
			break;
		case 1:
			printf("%d is even\n",num);
			break;
	}
}

int isEven(int num)
{
	if (num%2==0)
		return 1;
	else
		return 0;
}



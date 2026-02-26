#include <stdio.h>

int main()
{
	int num;

	printf("number : ");
	scanf("%d",&num);

	switch(num)
	{
		case 1:
			printf("one\n");
			break;
		case 2:
			printf("two\n");
			break;
		case 3:
			printf("three\n");
			break;
		case 4:
			printf("four\n");
			break;
		case 5:
			printf("five\n");
			break;
		default:
			printf("I can only count up to five\n");
			break;
	}

	return 0;
}


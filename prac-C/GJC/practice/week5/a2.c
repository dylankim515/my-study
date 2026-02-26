#include <stdio.h>

int main()
{
	char select;

	printf("Select OS(Windows=W, Linux=L, Mac=M: ");

	scanf("%c",&select);

	switch(select)
	{
		case 'W':
			printf("Windows OS Operated!\n");
			break;

		case 'L':
			printf("Linux OS Operated!\n");
			break;

		case 'M':
			printf("Mac OS Operated!\n");
			break;

		default:
			printf("Not proper OS.\n");
	}

	return 0;
}


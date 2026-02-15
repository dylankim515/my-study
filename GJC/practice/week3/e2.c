#include <stdio.h>

int main()
{
		int num;

		printf("number : ");
		scanf("%d",&num);
		printf("True/False : %d\n", (num==3) || (num==30) || (num==300));

		return 0;
	}


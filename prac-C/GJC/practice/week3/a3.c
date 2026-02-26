#include <stdio.h>

int main()
{
	char c;

	printf("Small letter : ");
	scanf("%c",&c);
	
	printf("Change %c to %c.\n",c,c-32);

	return 0;
}

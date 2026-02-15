#include <stdio.h>

int main()
{
	char a,b;

	printf("Type 2 alphabets: ");
	scanf("%c %c", &a, &b);

	printf("Result : %d\n", a<b);

	return 0;
}


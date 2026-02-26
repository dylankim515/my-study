#include <stdio.h>

int main()
{
	char key;

	printf("Type a character : ");
	scanf("%c", &key);

	if (key >= 'A' && key <= 'Z')
	{
		printf("Large Letter.\n");
	}
	else if (key>='a' && key <= 'z')
	{
		printf("Small Letter.\n");
	}
	else if (key>= '0' && key <='9')
	{
		printf("Decimal Number.\n");
	}
	else
	{
		printf("Not Alphabet or Number.\n");
	}


	return 0;
}


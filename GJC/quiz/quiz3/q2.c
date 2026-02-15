#include <stdio.h>

int main()
{
	char letter = 'A';

	printf("%c\n",letter++);
	printf("%c\n",++letter);
	printf("%c\n",letter--);
	printf("%c\n",--letter);
	printf("%c\n",++letter);

	return 0;
}


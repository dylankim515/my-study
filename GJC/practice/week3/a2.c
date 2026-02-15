#include <stdio.h>

int main()
{
	char c;
	char large = 32;

	printf("Enter the letter : ");
	scanf("%c",&c);

	printf("3 continuous alphabets starting from %c\n", c);
	printf(": %c %c %c\n",c,c+1,c+2);
	printf("Change the letter from small to large: %c\n",c-large);

	return 0;}

#include <stdio.h>

int main()
{
	char c;
	
	c = 'a';

	while(c<= 'z')
	{
		if (c == 'c' || c == 'h' || c == 'o' || c == 'i')
		{
			c++;
			continue;
		}

		printf("%c\t",c);
		c=c +1;
	}

	printf("\n");
	return 0;
}

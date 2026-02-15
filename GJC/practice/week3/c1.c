#include <stdio.h>

int main()
{
	int k =3;
	char c = 'X';
	printf("++k = %d\n", ++k); 
	printf("after ++k = %d\n",k);
	printf("k++ = %d\n", k++);
	printf("after k++ = %d\n", k);

	printf("++c = %c\n", ++c);
	printf("c-- = %c\n", c--);
	printf("c= %c\n",c);
	return 0;
}


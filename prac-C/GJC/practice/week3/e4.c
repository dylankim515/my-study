#include <stdio.h>

int main()
{

	char c;

	printf("alphabet : ");
	scanf("%c", &c);
	printf("Is it a capital letter? %d\n", c<97);

	printf("Is it a C(c)? %d\n", (c==67) || (c==99));
	printf("Isn't it a D(d)? %d\n",!( (c==68) || (c==100)));

	return 0;
}




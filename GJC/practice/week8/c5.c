#include <stdio.h>

void octal(int decimal);

int main()
{
	int num;

	printf("input number : ");
	scanf("%d",&num);

	printf("%d(10) -> ",num);
	octal(num);
	printf("(8)\n");

	return 0;
}

void octal(int decimal)
{
	int oct;
	if (decimal>0){
	oct= decimal % 8;
	octal(decimal/8);
	printf("%d",oct);
	}
	return;
}

	

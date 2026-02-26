#include <stdio.h>

double make_pow(int base, int index)
{
	if (index==0)
		return 1;
	return base * make_pow(base, index-1);
}

int main()
{
	int index, base;
	printf("print base number : ");
	scanf("%d", &base);
	printf("print index number : ");
	scanf("%d",&index);
	
	printf("%d^%d=%.lf\n", base, index, make_pow(base,index));
	return 0;
}



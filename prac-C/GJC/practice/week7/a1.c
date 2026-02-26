#include <stdio.h>

int main()
{
	int a=2;
	while(a<100)
	{
		a = a*3;
	}
	printf("100보다 작은 a_n 중 가장 큰 n은 %d입니다.\n",a/3);

	return 0;
}


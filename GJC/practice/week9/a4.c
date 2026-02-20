#include <stdio.h>

int main()
{
	int i, score[10];

	int bin=1;
	for (i=0;i<10;i++)
	{
		bin*=2;
		printf("score[%d] : %d\n",i,bin);
	}
	return 0;
}

		

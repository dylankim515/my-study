#include <stdio.h>

int main()
{
	float h=0;
	int n=1;
	
	printf("공을 떨어뜨릴 높이는? ");
	scanf("%f",&h);

	while(1)
	{
		h=h/2.0;
		if (h < 0.00001)
		{
			break;
		}
		n++;
	}

	printf("공이 튀긴 횟수는 %d입니다.\n",n);

	return 0;
}


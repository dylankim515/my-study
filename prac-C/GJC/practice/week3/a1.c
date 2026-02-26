#include <stdio.h>

int main()
{
	int x,y;
	float area;

	printf(" 정 수 입 력 : ");

	scanf("%d %d", &x,&y);//read width, height of triangle
			      //please try 2개의 홀수

	area = (float) (x * y / 2);
	printf("area = %7.1f\n",area);
	
	area = (float) x * y / 2;
	printf("area = %7.1f\n",area);
	
	area = x / 2 * (float) y;
	printf("area = %7.1f\n",area);
	
	area = (float) (x * y) / 2;
	printf("area = %7.1f\n",area);
	
	printf("area = %7d\n",(int)area);

	return 0;
}

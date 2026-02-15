#include <stdio.h>

int main()
{
	float pi = 3.141592;

	printf("pi = %f\n",pi);

	printf("pi with three decimal places = %5.3f\n",pi);

	printf("pi times 100 using Type casting int = %d\n",(int) (pi*100));

	return 0;
}

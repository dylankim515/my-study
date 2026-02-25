#include <iostream>

void swapPtr(int* a, int*b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void swapRef(int& a,int &b)
{
	int temp = a;
	a=b;
	b= temp;
}
int main()
{
	int x=10, y=20;

	swapRef(x,y);
	std::cout << x <<" " << y <<std::endl;
	
	swapPtr(&x,&y);
	std::cout << x <<" " << y <<std::endl;
	return 0;
}


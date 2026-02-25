#include <iostream>

int main()
{
	const int& ref = 4;
	int a = ref;
	std::cout << ref << std::endl;
	std::cout << a << std::endl;
}

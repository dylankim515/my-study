#include <iostream>
#include <string>

void PrintInfo (const std::string& name)
{
	std::cout << "이름 : " << name << std::endl;
}

int main()
{
	std::string my_name = "Dylan";
	PrintInfo(my_name);
	return 0;
}


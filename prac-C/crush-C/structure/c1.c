#include <stdio.h>
#include <string.h>


struct Date {
	int year;
	int month;
	int day;
};

struct Student {
	char name[20];
	int id;
	struct Date birthday;
};

int main()
{
	struct Student s1 = {"김동현",2023142165, {2003,5,15}};
	printf("이름 : %s\n",s1.name);
	printf("생일 : %d년 %d월 %d일\n",s1.birthday.year,s1.birthday.month,s1.birthday.day);

	struct Student s2;
	strcpy(s2.name, "홍길동");
	s2.birthday.year = 2023;
	s2.birthday.month = 3;
	s2.birthday.day = 23;

	printf("이름 : %s\n",s2.name);
	printf("생일 : %d년 %d월 %d일\n",s2.birthday.year,s2.birthday.month,s2.birthday.day);

	return 0;
}

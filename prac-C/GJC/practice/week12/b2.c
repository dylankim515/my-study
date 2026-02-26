#include <stdio.h>

int main()
{
    char strary[2][10];
    printf("이름과 번호를 입력하시오 : ");
    scanf("%s %s",strary[0],strary[1]);
    printf("이름 : %s\n번호 : %s\n",strary[0], strary[1]);
    return 0;

}
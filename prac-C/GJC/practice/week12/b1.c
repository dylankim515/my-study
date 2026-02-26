#include <stdio.h>

int main()
{
    char Astring[10], Bstring[10], Cstring[10];
    printf("문자열 3개를 입력하세요 : ");
    scanf("%s %s %s",Astring, Bstring, Cstring);

    printf("%s\n", Astring);
    printf("%s\n", Bstring);
    printf("%s\n", Cstring);

    return 0;
}
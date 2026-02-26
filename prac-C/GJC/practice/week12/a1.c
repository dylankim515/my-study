#include <stdio.h>

int main()
{
    int i=0;
    char kr[] = {'K','o','r','e','a','n'};
    char ma[] = {'M','a','t','h'};
    char *eng = "English";

    printf("kr = %12s\nma = %12s\neng = %12s\n",kr,ma,eng);
    printf("%u\n",&kr);
    printf("%u\n",&ma);
    printf("%u\n",eng);
    printf("%u\n",&eng);
    printf("Print kr : ");
    while(kr[i]!='\0')printf("%c",kr[i++]);
    printf("\n");

    i=0;
    printf("Print eng with i : ");
    while (*(eng+i)!='\0')printf("%c",*(eng + i++));
    printf("\n");

    printf("Print eng : ");
    while(*(eng)!='\0')printf("%c",*(eng++));
    printf("\n");

    return 0;
}
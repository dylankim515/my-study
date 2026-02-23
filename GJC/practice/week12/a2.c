#include <stdio.h>

int main()
{
    int i=0;
    char kr[] = {'K','o','r','e','a','n','\0'};
    char lan[14];
    char *eng = "English";

    while(kr[i]!='\0')
    {
        lan[i] = kr[i++];
    }
    i++;
    int j=0;
    while(eng[j]!='\0')
    {
        lan[i++] = eng[j++];
    }
    printf("%s\n",lan);
}
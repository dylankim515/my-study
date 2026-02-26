#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20] = "stringA";
    char str2[20];
    char str3[20] = "stringB";

    printf("strcmp a and ab: %d\n", strcmp("a","ab"));
    printf("strcmp ab and a: %d\n", strcmp("ab","a"));
    printf("strcmp ab and ab: %d\n\n", strcmp("ab","ab"));

    printf("strcmp str1 and str3: %d\n", strcmp(str1,str3));
    strcpy(str2,str1);
    printf("strcpy str2: %s\n", str2);

    printf("strcmp str1 and str2: %d\n", strcmp(str1,str2));
    strcat(str2,str3);
    printf("strcat str2: %s\n",str2);

    return 0;

}
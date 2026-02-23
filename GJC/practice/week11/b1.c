#include <stdio.h>

int main()
{
    char a = 'a';
    int b=1;
    float c=1.3;
    double d=3.5;

    char *p1;
    int *p2;
    float *p3;
    double *p4;

    p1 = &a;
    p2 = &b;
    p3 = &c;
    p4 = &d;

    *p1 +=1;
    *p2 +=1;
    *p3 +=1;
    *p4 +=1;

    printf("a : %c \n",a);
    printf("address a: %u")

}
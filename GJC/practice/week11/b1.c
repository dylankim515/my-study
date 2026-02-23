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
    printf("address a: %u, value p1: %u\n",&a,p1);
    printf("b : %d \n",b);
    printf("address b: %u, value p2: %u\n",&b,p2);
    printf("c : %f \n",c);
    printf("address c: %u, value p3: %u\n",&c,p3);
    printf("d : %lf \n",d);
    printf("address d: %u, value p4: %u\n",&d,p4);

    return 0;
}
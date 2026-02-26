#include <stdio.h>

int main()
{
    int n=10;
    int *p1 = &n;
    printf("n의 값 : %d\n",n);
    printf("n의 주소값 : %p\n",p1);
    printf("n의 주소값 : %u\n",p1);

    printf("p의 값 : %u\n",p1);
    printf("p의 주소값 : %u\n",&p1);
    printf("int n의 크기: %zu\n", sizeof(n));
    printf("pointer p의 크기: %zu\n", sizeof(p1));

    return 0;
}
//구조체의 복사(할수 있음)
#include <stdio.h>

struct TEST
{
    int i;
    char c;
};

int main()
{
    struct TEST st,st2;

    st.i = 1;
    st.c = 'c';

    st2=st;

    printf("st2.i = %d\n",st2.i);
    printf("st2.C = %c\n",st2.c);

}
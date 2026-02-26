#include <stdio.h>

int main()
{
    int A[10] = {2,3,1,2,6,5,9,10,3,14};
    int i=0,n=0;

    printf("A={");
    for (i=0;i<10;i++)
    {
        printf("%3d",A[i]);
    }
    printf(" }\n");
    while(1)
    {
        printf("지우고 싶은 n번째 항 : ");
        scanf("%d",&n);
        if (n==0)
        {
            break;
        }
        for (i=n-1;i<10-1;i++)
        {
            A[i] = A[i+1];
        }
        A[9]=0;
        printf("A = {");
        for (i=0;i<10;i++)
        {
            printf("%3d",A[i]);
        }
        printf("}\n");
    }
    return 0;
}
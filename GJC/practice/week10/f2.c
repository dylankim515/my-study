#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i,j,n;
    int A[10];
    srand(time(NULL));

    for (i=0;i<10;i++)
    {
        A[i] = rand()%20+1;
        printf("%d ",A[i]);
    }
    printf("\nn = ");
    scanf("%d",&n);

    for (i=0;i<10;i++)
    {
        if (A[i] == n)
        {
            for (j=i;j<10;j++)
            {
                A[j] = A[j+1];
            }
            A[9]=0;
        }
    }
    for (i=0;i<10;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
    return 0;
}
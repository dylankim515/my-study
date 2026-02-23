#include <stdio.h>
int MaxVal(int pArr[], int n);

int main()
{
    int A[5];
    int i;
    printf("A : ");
    for (i=0;i<5;i++)
    {
        scanf("%d",&A[i]);
    }

    printf("Max Value : %d\n",MaxVal(A,5));

    return 0;
}

int MaxVal(int pArr[], int n)
{
    int max=0;
    for (int i=0;i<n;i++)
    {
        if (max < *(pArr+i))
        {
            max = *(pArr+i);
        }
    }

    return max;
}
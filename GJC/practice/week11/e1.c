#include <stdio.h>
void maxmin1(int num1, int num2, int num3, int *max, int *min)
{
    if (num1 >= num2 && num2>=num3)
    {
        *max = num1; *min = num3;
    }
    else if (num2 >= num1 && num1>=num3)
    {
        *max = num2; *min = num3;
    }
    else if (num1 >= num3 && num3>=num2)
    {
        *max = num1; *min = num2;
    }
    else if (num2 >= num3 && num3>=num1)
    {
        *max = num2; *min = num1;
    }
    else if (num3 >= num2 && num2>=num1)
    {
        *max = num3; *min = num1;
    }
    else
    {
        *max = num3; *min = num2;
    }
}

void maxmin2(int num[], int N, int *max, int *min)
{
    *max = num[0];
    *min = num[0];

    for (int i=0;i<N;i++)
    {
        if (num[i]>*max)
        {
            *max = num[i];
        }
        if (num[i]<*min)
        {
            *min = num[i];
        }

    }
}


int main()
{
    int A[5] = {12, 34, 612,4, 67};
    int a,b,c;
    int *max = &a ;
    int *min = &b ;
    a=45;b=432;c=3;
   maxmin1(a,b,c, *max,*min);
    printf("max = %d min = %d\n",*max, *min);
    int N=5;
    maxmin2(A, N, max, min);

    printf("max = %d min = %d\n",*max, *min);

}
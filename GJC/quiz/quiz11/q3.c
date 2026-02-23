#include <stdio.h>
int calculate(const int *A, const int *B, int SIZE){
    int sum=0;
    for (int i=0;i<SIZE;i++)
    {
        sum+=A[i]*B[i];
    }
    return sum;
}

int main()
{
    int A[5] = {100,200,300,400,500};
    int B[5];
    int sum;

    printf("Enter five item numbers (1~5):\n");
    for (int i=0;i<5;i++)
    {
        scanf("%d",&B[i]);
    }
    printf("Total cost of purchase is: %d\n",calculate(A,B,5));

    return 0;

}
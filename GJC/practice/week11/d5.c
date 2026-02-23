#include <stdio.h>
void swap(int *a, int *b);
void swap_array(int A[], int m, int n);

int main()
{
    int A[5] = {1,2,3,4,5};
    int a,b;
    scanf("%d %d",&a, &b);
    swap_array(A, a,b);

    for (int i=0;i<5;i++){
        printf("%d ",A[i]);
    }

    printf("\n");
    return 0;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void swap_array(int A[], int m, int n)
{
    swap(&A[m],&A[n]);

}
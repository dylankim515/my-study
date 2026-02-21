#include <stdio.h>

int main()
{
    int i,j,n,num=1;
    int arr[10][10];

    printf("행렬크기 : ");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            arr[i][j] = num++;
            printf("%4d",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int sum;
    for (j=0;j<n;j++)
    {
        sum=0;
        for (i=0;i<n;i++)
        {
            sum+=arr[i][j];
            
        }
        printf("%4d",sum);
    }

    printf("\n");
    return 0;
}

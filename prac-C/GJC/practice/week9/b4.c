#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i,j,sum;
    int arr[5][5];
    srand(time(NULL));

    for (i=0;i<5;i++){
        sum=0;
        for (j=0;j<5;j++){
            arr[i][j] = rand()%10+1;
            sum+=arr[i][j];
            printf("%3d",arr[i][j]);
        }
        printf("%3d\n", sum);
    }
    return 0;
}
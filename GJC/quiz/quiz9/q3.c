#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int A[5][5];
    int i,j;
    int sum;

    srand(time(NULL));

    printf("Array A :\n");
    for (i=0;i<5;i++){
        sum=0;
        for (j=0;j<5;j++){
            A[i][j] = rand()%10+1;
            printf("%3d",A[i][j]);
            sum+=A[i][j];
        }
        printf("%3d\n",sum);
    }

    for (j=0;j<5;j++){
        sum=0;
        for (i=0;i<5;i++){
            sum+=A[i][j];
        }
        printf("%3d",sum);
    }
    printf("\n");

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i,j;
    int A[50][50]={};
    int B[] ={};
    int n,m;
    srand(time(NULL));

    printf("input (n m): ");
    scanf("%d %d",&n,&m);
    printf("Array A[%d][%d] :\n",n,m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            A[i][j] = rand()%10;
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }


    printf("transformed B[%d] :\n",n*m);
    for (i=0;i<n*m;i++){
        B[i] = A[i/m][i%m];
        printf("%d ",B[i]);
    }
    printf("\n");
    return 0;


}
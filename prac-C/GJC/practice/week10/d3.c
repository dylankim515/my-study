#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i,j;
    int A[100][100]={};
    int B[100][100] ={};
    int n,m;
    srand(time(NULL));

    printf("input (n m): ");
    scanf("%d %d",&n,&m);
    printf("Array A[%d][%d] :\n",n,m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            A[i][j] = rand()%10;
            B[j][i] = A[i][j];
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    printf("Array B[%d][%d] :\n",m,n);

    
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    return 0;
}


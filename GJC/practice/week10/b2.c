#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int A[5][5], B[5][5];
    int i,j;
    int p,q,k;

    srand(time(NULL));
    int n=1;
    for (i=0;i<5;i++){
        for (j=0;j<5;j++){
            A[i][j]=n++;
            printf("%3d",A[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    for (i=0;i<5;i++){
        for (j=0;j<5;j++){
            p=rand()%5;
            q=rand()%5;
            k= A[i][j];
            A[i][j] = A[p][q];
            A[p][q] = k;

        }
    }
    for (i=0;i<5;i++){
        for (j=0;j<5;j++){
            printf("%3d",A[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");



    for (i=0;i<5;i++){
        for (j=0;j<5;j++){
            if (A[i][j]%5==0){
                B[i][j] = 0;
            }
            else{
                B[i][j]=A[i][j];
            }
            printf("%3d",B[i][j]);
        }
        printf("\n");
    }

    return 0;
}

    
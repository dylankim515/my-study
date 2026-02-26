#include <stdio.h>

int main()
{
    int i,j;
    int a[3][3] = {{2,4,1},{5,6,1},{7,4,0}};
    int b[9] = {0};

    for (i=0;i<9;i++){
        b[i] = a[i/3][i%3];
    }

    printf("a : \n");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }

    printf("b : \n");
    for (i=0;i<9;i++){
        printf("%2d",b[i]);
    }
    printf("\n");
    return 0;
}
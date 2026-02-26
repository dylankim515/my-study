#include <stdio.h>

int main() {
    int i,j,n=0;
    int arr[10][10];
        for (i=0;i<10;i++){
            for (j=0;j<10;j++) {
                arr[i][j] = n++;
                if (arr[i][j]%2!=0 && arr[i][j] %3!=0){    
                printf("%4d",arr[i][j]);
                }
                else {
                    printf("    ");
                }
        }
        printf("\n");
    }
    return 0;

}
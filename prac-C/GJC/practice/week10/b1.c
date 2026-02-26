#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    int n,p,k;
    int u[10];

    srand(time(NULL));

    printf("A = { ");
    for (n=0;n<10;n++)
        u[n] = n;

    for (n=9;n>0;n--){
        p=rand()%(10);
        k=u[n];
        u[n] = u[p];
        u[p] =k;
    }
    for (n=0;n<10;n++)
        printf("%d ",u[n]);
    puts("}");
}
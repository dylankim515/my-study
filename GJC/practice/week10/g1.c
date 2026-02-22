#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int abs(int a){
    if (a<0){
        return -a;
    }
    else{
        return a;
    }
}

int main()
{
    int i,j,sum;
    int A[5][9];
    int B[9];
    int min=100, index;

    srand(time(NULL));
    printf("비교할 9개의 정수를 입력하세요.\nB : ");
    for (i=0;i<9;i++)
        scanf("%d",&B[i]);
    
    printf("\n랜덤한 배열!\nA =\n");
    for (i=0;i<5;i++)
    {
        sum=0;
        for(j=0;j<9;j++)
        {
            A[i][j] = rand()%10+1;
            sum+=abs(B[j]-A[i][j]);
            printf("%3d",A[i][j]);
        }
        printf("(%d)\n",sum);
        if (sum<min)
        {
            min=sum;
            index=i;
        }
    }
    printf("\n\n가장 비슷한 배열\n");
    for (j=0;j<9;j++)
    {
        printf("%3d",A[index][j]);
    }
    printf("\n");
    return 0;
}


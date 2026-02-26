#include <stdio.h>

int main()
{
    int B[2][5] = {{13,55,48,46,72},{19,12,8,66,11}};
    int order[10];
    int i,j,k,x,y,min;

    for (i=0;i<10;i++)
    {
        min=100;
        for (j=0;j<2;j++)
        {
            for (k=0;k<5;k++)
            {
                if (B[j][k] < min)
                {
                    min=B[j][k];
                    x=j;
                    y=k;
                }
            }
        }
        B[x][y] = 100;
        order[i]=min;
    }
    printf("4번째로 작은 수 : %d\n",order[3]);
    return 0;
}
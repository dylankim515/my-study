#include <stdio.h>

int main(){
    int i,j;
    char word[2][5] = {{'H','a','r','d', ' '},{'A','r','r','a','y'}};

    for (i=0;i<2;i++)
    {
        for (j=0;j<5;j++){
            printf("%c",word[i][j]);
        }
    }
    printf("\n");

    word[0][0] = 'E';
    word[0][1] = 'a';
    word[0][2] = 's';
    word[0][3] = 'y';

    for (i=0;i<2;i++)
    {
        for (j=0;j<5;j++){
            printf("%c",word[i][j]);
        }
    }
    printf("\n");

    return 0;
}
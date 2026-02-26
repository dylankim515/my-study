#include <stdio.h>
#include <stdlib.h>

void printGameBoard (char gameBoard [3][3]){
    printf("  0\t1\t2\n");
    for (int i=0;i<3;i++){
        printf("%d ",i);
        for (int j=0;j<3;j++){
            printf("%c\t",gameBoard[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a,b;
    char tictactoe[3][3] = {{'E','E','E'},
                            {'E','E','E'},
                            {'E','E','E'}};
    
    
    while(1){
    printGameBoard(tictactoe);
    printf("Enter row and column (ex. 0 0) : ");
    scanf("%d %d",&a,&b);
    tictactoe[a][b] = 'X';
    a=rand()%3;
    b=rand()%3;
    tictactoe[a][b] = 'O';

    }
    return 0;
}

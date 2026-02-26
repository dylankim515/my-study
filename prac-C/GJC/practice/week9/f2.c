#include <stdio.h>

void printGameBoard (char gameBoard [3][3]){
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            printf("%c ",gameBoard[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    char tictactoe[3][3] = {{'X','O','X'},
                            {'O','X','O'},
                            {'X','O','X'}};
    
    printf("Tic-Tac-Toe Game Board:\n");
    printGameBoard(tictactoe);
    return 0;
}

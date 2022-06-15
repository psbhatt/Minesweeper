#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define BEGINNER 0
#define INTERMEDIATE 1
#define ADVANCED 2
#define MAXSIDE 25
#define MAXMINES 99
#define MOVESIZE 526 // (25 * 25 - 99)

int SIDE ; // side length of the board
int MINES ; // number of mines on the board

bool validCell(int row, int col){
    return ((row)*(row - SIDE) <= 0) && ((col)*(col - SIDE) <= 0);
}

bool mineCheck(int row, int col, char board[][MAXSIDE]){
    return board[row][col] == '*';
}

void placeMove(int *row, int *col){
    printf("Enter your move(row, column): ");
    scanf("%d %d", row, col);
}

void printBoard(char playerBoard[][MAXSIDE]){
    int row,col;

    // column headers
    for (row = 0; row < SIDE; row++)
        printf("%d ", row);

    printf("\n");
    for (row = 0; row < SIDE; row++){
        // row headers
        printf("%d ", row);

        // board
        for (col = 0; col < SIDE; col++)
            printf("%c ", playerBoard[row][col]);

        printf("\n");
    }


}


int main() {
    SIDE = 9;
    char board[5][MAXSIDE];
    board[0][0] = '*';
    validCell(-1,0)? cout << "Yes\n":  cout  <<"No\n";
    mineCheck(0,1, board)? cout << "Yes\n":  cout  <<"No\n";
}


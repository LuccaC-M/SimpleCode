/*
 *  MY BROKEN ATTEMPT AT TIC TAC TOE :o 
 */

#include <stdio.h>
#include <stdbool.h>
#define PLAYER1 'O'
#define PLAYER2 'X'

char board[10] = {' ', ' ', ' ',' ', ' ', ' ', ' ', ' ',' ', ' ' };

char checkWinner() {
    int start = 1;
    // Checking for horizontal win
    for (int i = 0;i < 3;i++)
    {
        if(board[(start-1)] == board[start] && board[start] == board[(start+1)])
            return board[start];
        start += 3;
    }
    start = 1;
    // Checking for vertical win
    for (int j = 0;j < 3;j++)
    {
        if(board[j] == board[(j+3)] && board[(j+3)] == board[(j+6)])
            return board[j];
    }
    // Checking for diagonal win
    if (board[0] == board[4] && board[4] == board[8]) {
        return board[0];
    } else if (board[2] == board[4] && board[4] == board[6]) {
        return board[2];
    }
    return ' ';
}

void printBoard() {
    printf(" %c | %c | %c \n", board[0], board[1], board[2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[3], board[4], board[5]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[6], board[7], board[8]);
}

bool checkBoardFull() {
    // Variables
    int count;
    // Counting for cells that aren't empty
    for (int i = 0; i < 10; i++) {
        if (board[i] != ' ')
            count++;
        
    }
    // Return result
    if (count >= 9){
        return false;
    }
    return true;
}

bool checkMove(short cell) {
    // Checking for to large/little numbers & if cell is occupied
    if (cell > 9 || cell < 1 || board[cell-1] == PLAYER1 || board[cell-1] == PLAYER2){
        printf("INVALID MOVE\n\n");
        return false;
    }
    return true;
}

int main() {
//  Variables
    short cell;
    bool validmove; 
    printBoard();
    
//  Game Loop    
    while (!checkBoardFull() && checkWinner() == ' ') {    
        // Player 1 Loop
        while (validmove != true) {
            printf("Enter number: ");
            scanf("%hd", &cell);
            validmove = checkMove(cell);
        }
        // Inputing cell, printing board & reseting variables
        board[(cell-1)] = PLAYER1;
        validmove = false;
        printBoard();
        // Checking for winner
        if (!checkBoardFull() && checkWinner() == ' ') {
            // Player 2 loop
            while (validmove != true) {
                printf("Enter cell: ");
                scanf("%hd", &cell);
                validmove = checkMove(cell);
            }
            // Inputing cell, printing board & resenting variables
            board[(cell-1)] = PLAYER2;
            printBoard();
            validmove = false;
        }
    }
    // Printing result of the game
    if (checkWinner() == PLAYER1) {printf("Player 1 Won!\n");} else if (checkWinner() == PLAYER2) {printf("Player 2 Won!\n");} else {printf("It's a Draw\n");}
}

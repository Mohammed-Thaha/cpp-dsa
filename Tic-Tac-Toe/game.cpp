#include <iostream>
#include <vector>
#include "../Author.h"
using namespace std;

vector<vector<char>> board={
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'}
};

char currentPlayer='X';
bool isTie=false;

void printBoard() {
    cout<<"\n";
    for (int i = 0; i < 3; i++) {
        cout << " " << board[i][0] << " | " << board[i][1] << " | " << board[i][2] << "\n";
        if (i < 2)cout << "---|---|---\n";
    }
    cout << "\n";
}

void makeMove() {
    int move;
    cout << "Player '" << currentPlayer << "', enter your move (1-9): ";
    cin >> move;

    int row = (move - 1) / 3; 
    int col = (move - 1) % 3;

    if (move < 1 || move > 9 || board[row][col] == 'X' || board[row][col] == 'O') {
        cout << "Invalid move! Try again.\n";
        makeMove();
        return;
    }

    board[row][col] = currentPlayer;
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}

bool checkWin() {

    for (int i = 0; i < 3; ++i) {
        
        if ((board[i][0] == board[i][1] && board[i][1] == board[i][2]) ||
            (board[0][i] == board[1][i] && board[1][i] == board[2][i]))
            return true;
    }
    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2]) ||
        (board[0][2] == board[1][1] && board[1][1] == board[2][0]))
        return true;

    isTie = true;
    for (auto row : board)
        for (char cell : row)
            if (cell != 'X' && cell != 'O')
                isTie = false;

    return false;
}

int main() {
    Display();
    cout << "\n\n\n\t\t\t\tWelcome to Tic-Tac-Toe!\n";
    printBoard();

    while (!checkWin() && !isTie) {
        makeMove();
        printBoard();
    }

    if (isTie)
        cout << "It's a tie!\n";
    else
        cout << "Player '" << (currentPlayer == 'X' ? 'O' : 'X') << "' wins!\n";

    return 0;
}
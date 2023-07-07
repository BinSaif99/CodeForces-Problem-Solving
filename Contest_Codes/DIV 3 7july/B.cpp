#include <iostream>
using namespace std;

// A function to check if a player has won the game
bool checkWin(char board[3][3], char symbol) {
    // Check rows
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == symbol && board[i][1] == symbol && board[i][2] == symbol) {
            return true;
        }
    }
    // Check columns
    for (int j = 0; j < 3; j++) {
        if (board[0][j] == symbol && board[1][j] == symbol && board[2][j] == symbol) {
            return true;
        }
    }
    // Check diagonals
    if (board[0][0] == symbol && board[1][1] == symbol && board[2][2] == symbol) {
        return true;
    }
    if (board[0][2] == symbol && board[1][1] == symbol && board[2][0] == symbol) {
        return true;
    }
    // No win
    return false;
}

// A function to print the result of the game
void printResult(char board[3][3]) {
    // Check if any player has won
    if (checkWin(board, 'X')) {
        cout << "X" << endl;
    } else if (checkWin(board, 'O')) {
        cout << "O" << endl;
    } else if (checkWin(board, '+')) {
        cout << "+" << endl;
    } else {
        // No one has won, check if there is a draw
        bool draw = true;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] == '.') {
                    // There is an empty cell, not a draw
                    draw = false;
                    break;
                }
            }
            if (!draw) break;
        }
        if (draw) {
            cout << "DRAW" << endl;
        } else {
            // The game is not over yet, invalid input
            cout << "DRAW" << endl;
        }
    }
}

int main() {
    int t; // Number of test cases
    cin >> t;
    while (t--) {
        char board[3][3]; // The game board
        // Read the board from input
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cin >> board[i][j];
            }
        }
        // Print the result of the game
        printResult(board);
    }
    return 0;
}

#include <iostream>
using namespace std;
#include "board.h"

int main()
{
    bool run = true;

    cout << "Let's play Tic Tac Toe!\n";
    cout << "\n";

    board TTTBoard;

    while (run)
    {
        TTTBoard.printBoard();

        TTTBoard.getPlayerChoice(1);
        cout << endl;

        if(TTTBoard.checkWinState() == 3)
        {
            TTTBoard.printBoard();
            cout << "The players have reached a draw\n";
            break;
        }
        if(TTTBoard.checkWinState() == 1)
        {
            TTTBoard.printBoard();
            cout << "The player X has WON!\n";
            break;
        }

        TTTBoard.printBoard();

        TTTBoard.getPlayerChoice(2);
        cout << endl;

        if(TTTBoard.checkWinState() == 3)
        {
            TTTBoard.printBoard();
            cout << "The players have reached a draw\n";
            break;
        }
        if(TTTBoard.checkWinState() == 2)
        {
            TTTBoard.printBoard();
            cout << "The player O has WON!\n";
            break;
        }
    }

    return 0;
}
#include <iostream>
#include "board.h"

using namespace std;

board::board()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            boardState[i][j] = 0;
        }
    }
}

void board::printBoard()
{
    cout << "\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " " << getChar(boardState[i][j]) << " ";
            if (j<2) cout << "|";
        }
        
        if (i<2) cout << "\n-----------\n";
    }
    cout << "\n";
    cout << "\n";
}

char board::getChar(int state)
{
    switch (state)
    {
    case 0:
        return ' ';
        break;
    case 1:
        return 'X';
        break;
    case 2:
        return 'O';
        break;
    default:
        return 'E';
        break;
    }
}

void board::getPlayerChoice(int player)
{
    bool run = true;
    int choice{};

    while (run)
    {
    
        if (player == 1)
        {
            cout << "Player one place a X on the board where there are no O\n";
            cout << "Please choose a number from 1 to 9 for the position like a phone.\n";
            cin >> choice;

            switch (choice)
            {
                case 1:
                    if (checkBoardPos(0, 0)== true)
                    {
                        boardState[0][0] = 1;
                        run = false;
                    }
                    else
                    {
                        printBoard();
                        cout << "Please try a different position\n";
                    }
                    break;
                case 2:
                    if (checkBoardPos(0, 1))
                    {
                        boardState[0][1] = 1;
                        run = false;
                    }
                    else
                    {
                        printBoard();
                        cout << "Please try a different position\n";
                    }
                    break;
                case 3:
                    if (checkBoardPos(0, 2))
                    {
                        boardState[0][2] = 1;
                        run = false;
                    }
                    else
                    {
                        printBoard();
                        cout << "Please try a different position\n";
                    }
                    break;
                case 4:
                    if (checkBoardPos(1, 0))
                    {
                        boardState[1][0] = 1;
                        run = false;
                    }
                    else
                    {
                        printBoard();
                        cout << "Please try a different position\n";
                    }
                    break;
                case 5:
                    if (checkBoardPos(1, 1))
                    {
                        boardState[1][1] = 1;
                        run = false;
                    }
                    else
                    {
                        printBoard();
                        cout << "Please try a different position\n";
                    }
                    break;
                case 6:
                    if (checkBoardPos(1, 2))
                    {
                        boardState[1][2] = 1;
                        run = false;
                    }
                    else
                    {
                        printBoard();
                        cout << "Please try a different position\n";
                    }
                    break;
                case 7:
                    if (checkBoardPos(2, 0))
                    {
                        boardState[2][0] = 1;
                        run = false;
                    }
                    else
                    {
                        printBoard();
                        cout << "Please try a different position\n";
                    }
                    break;
                case 8:
                    if (checkBoardPos(2, 1))
                    {
                        boardState[2][1] = 1;
                        run = false;
                    }
                    else
                    {
                        printBoard();
                        cout << "Please try a different position\n";
                    }
                    break;
                case 9:
                    if (checkBoardPos(2, 2))
                    {
                        boardState[2][2] = 1;
                        run = false;
                    }
                    else
                    {
                        printBoard();
                        cout << "Please try a different position\n";
                    }
                    break;
                default:
                    printBoard();
                    cout << "Please enter a number from 1 to 9\n";
            }
        }
        else if (player == 2)
        {
            cout << "Player two place a O on the board where there are no X\n";
            cout << "Please choose a number from 1 to 9 for the position like a phone.\n";
            cin >> choice;

            switch (choice)
            {
                case 1:
                    if (checkBoardPos(0, 0))
                    {
                        boardState[0][0] = 2;
                        run = false;
                    }
                    else
                    {
                        printBoard();
                        cout << "Please try a different position\n";
                    }
                    break;
                case 2:
                    if (checkBoardPos(0, 1))
                    {
                        boardState[0][1] = 2;
                        run = false;
                    }
                    else
                    {
                        printBoard();
                        cout << "Please try a different position\n";
                    }
                    break;
                case 3:
                    if (checkBoardPos(0, 2))
                    {
                        boardState[0][2] = 2;
                        run = false;
                    }
                    else
                    {
                        printBoard();
                        cout << "Please try a different position\n";
                    }
                    break;
                case 4:
                    if (checkBoardPos(1, 0))
                    {
                        boardState[1][0] = 2;
                        run = false;
                    }
                    else
                    {
                        printBoard();
                        cout << "Please try a different position\n";
                    }
                    break;
                case 5:
                    if (checkBoardPos(1, 1))
                    {
                        boardState[1][1] = 2;
                        run = false;
                    }
                    else
                    {
                        printBoard();
                        cout << "Please try a different position\n";
                    }
                    break;
                case 6:
                    if (checkBoardPos(1, 2))
                    {
                        boardState[1][2] = 2;
                        run = false;
                    }
                    else
                    {
                        printBoard();
                        cout << "Please try a different position\n";
                    }
                    break;
                case 7:
                    if (checkBoardPos(2, 0))
                    {
                        boardState[2][0] = 2;
                        run = false;
                    }
                    else
                    {
                        printBoard();
                        cout << "Please try a different position\n";
                    }
                    break;
                case 8:
                    if (checkBoardPos(2, 1))
                    {
                        boardState[2][1] = 2;
                        run = false;
                    }
                    else
                    {
                        printBoard();
                        cout << "Please try a different position\n";
                    }
                    break;
                case 9:
                    if (checkBoardPos(2, 2))
                    {
                        boardState[2][2] = 2;
                        run = false;
                    }
                    else
                    {
                        printBoard();
                        cout << "Please try a different position\n";
                    }
                    break;
                default:
                    printBoard();
                    cout << "Please enter a number from 1 to 9\n";
            }
        }
        else
        {
            run = false;
        }
    }
}

int board::checkWinState()
{
    bool draw = true;
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(boardState[i][j] == 0)
                draw = false;
        }
    }

    if (draw == true)
        return 3;
    
    if ((boardState[0][0] == 1 && boardState[1][0] == 1 && boardState[2][0] == 1) or
        (boardState[0][1] == 1 && boardState[1][1] == 1 && boardState[2][1] == 1) or
        (boardState[0][2] == 1 && boardState[1][2] == 1 && boardState[2][2] == 1) or
        (boardState[0][0] == 1 && boardState[0][1] == 1 && boardState[0][2] == 1) or
        (boardState[1][0] == 1 && boardState[1][1] == 1 && boardState[1][2] == 1) or
        (boardState[2][0] == 1 && boardState[2][1] == 1 && boardState[2][2] == 1) or
        (boardState[0][0] == 1 && boardState[1][1] == 1 && boardState[2][2] == 1) or
        (boardState[2][0] == 1 && boardState[1][1] == 1 && boardState[0][2] == 1))
        return 1;

    if ((boardState[0][0] == 2 && boardState[1][0] == 2 && boardState[2][0] == 2) or
        (boardState[0][1] == 2 && boardState[1][1] == 2 && boardState[2][1] == 2) or
        (boardState[0][2] == 2 && boardState[1][2] == 2 && boardState[2][2] == 2) or
        (boardState[0][0] == 2 && boardState[0][1] == 2 && boardState[0][2] == 2) or
        (boardState[1][0] == 2 && boardState[1][1] == 2 && boardState[1][2] == 2) or
        (boardState[2][0] == 2 && boardState[2][1] == 2 && boardState[2][2] == 2) or
        (boardState[0][0] == 2 && boardState[1][1] == 2 && boardState[2][2] == 2) or
        (boardState[2][0] == 2 && boardState[1][1] == 2 && boardState[0][2] == 2))
        return 2;
    
    return 0;
}

bool board::checkBoardPos(int row, int col)
{
    if (boardState[row][col] == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

class board
{
public:
    board();

    void printBoard();
    char getChar(int state);
    void getPlayerChoice(int player);

    int checkWinState();
    bool checkBoardPos(int row, int col);
private:
    int boardState[3][3];
};
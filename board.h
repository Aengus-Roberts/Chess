#pragma once

class Board {
private:
public:
    // Defines which players turn it is: white (0), black(1)
    int player;

    // states to check whether a player is in check
    int whiteCheck;
    int blackCheck;

    int board[8][8]; // this will be the board

    // Constructor
    Board();

    // Destructor
    ~Board();

    // Rules
    int isLegalMove();

    void updateBoard();

    void updateView();

    void Reset();
};

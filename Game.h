#ifndef __GAME_H__
#define __GAME_H__

#include "Token.h"
#include "AI.h"

using namespace std;

class Game{

    private:
        Token* board[6][7];
        AI* cpu;
        int turns;
    public:
        Game();
        Game(Game*);
        ~Game();
        bool isPlayable(int,int); //checks to see if a piece in a column can be placed
        bool checkWin(int); //checks to see if a piece in a column will win
        void printBoard(); 
        void addToken(int); //adds token to board input column
        Token*[][] getBoard(){ return board;} //returns pointer to board
        int numTurns(){return turns;}; //return turn count

};


#endif
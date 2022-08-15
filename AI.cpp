#include "../header/AI.h"

int algorithm(const Game& board){

    if(board.numTurns() == ROWS*COLUMNS){ // checks for draw game
        return 0; 
    }
    for(int x = 0; x < COLUMNS; x++) // checks if current player can win next move
    if(board.isPlayable(x) && board.checkWin(x)) {
        return (COLUMNS*ROWS+1 - board.numTurns())/2;
    }
    int bestScore = -ROWS*COLUMNS; // init bestScore with lowest score
    
    for(int x = 0; x < COLUMNS; x++){// compute the score of all possible next move and keep the best one
        if(board.isPlayable(x)) {
            Game* board2(board);
            board2.addToken(x);  
            int score = -algorithm(board2); // If current player plays col x, his score will be the opposite of opponent's score after playing col x
            if(score > bestScore){// keep track of best possible score so far.
                bestScore = score; 
                bestMove = x;
            }
        }
    } 
    return bestScore;
}
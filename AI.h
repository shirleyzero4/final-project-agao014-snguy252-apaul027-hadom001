#ifndef __AI_H__
#define __AI_H__

#include "Game.h"

using namespace std;

class AI {
    private:
        unsigned long long nodeCount; // counter of explored nodes.
        static const int ROWS = 6;
        static const int COLUMNS = 7;
        int bestMove = 1;
        Game* board;

    public:
    AI(Game*);
    ~AI();
    /*
    
    */
    int algorithm(const Game &);




#endif
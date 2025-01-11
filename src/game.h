#pragma once
#include "grid.h"
#include "blocks.cpp"




class Game{

    public:
        bool gameOver;
        Game();
        ~Game();
        std::vector<Block> getAllBlocks();
        void Draw();
        void handleInput();
        void moveBlockDown();
        int score;
        Music music;

    private:
        Grid grid;
        std::vector<Block> blocks;
        Block currentBlock, nextBlock;
        bool isBlockOutSize();
        void rotateBlock();
        void lockBlock();
        bool blockFits();
        void reset();
        void updateScore(int linesCleared, int moveDownPoints);
         Block getRandomBlock();
         void moveBlockLeft();
        void moveBlockRight();
        Sound rotateSound;
        Sound clearSound;
};
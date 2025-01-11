#pragma once
#include<vector>
#include<map>
#include "position.h"
#include "colors.h"

class Block
{
    public:
        Block();
        int id;
        std::map<int, std::vector<Position>> cells;
        void Draw(int offSetX, int offSetY);
        void Move(int rows, int columns);
        std::vector<Position> getCellPostions();
        void rotate();
        void undoRotation();

    private:
        int cellSize, rotationState, rowOffset, columnOffset;
        std::vector<Color> colors;

};
#pragma once // this makes sure header file is included only once in our compilation unit avoiding duplicate defination

#include<vector>
#include <raylib.h>


class Grid
{
private:


    int numRows, numCols, cellSize;

    std::vector<Color> colors;
    bool isRowFull(int row);
    void clearRow(int row);
    void moveRowDown(int row, int numRows);

public:

    int grid[20][10];

    Grid();

    void Initialize();
    void Print();
    void Draw();
    bool isCellOutSide(int row, int column);
    bool isCellEmpty(int row, int column);
    int clearFullRows();
    
};


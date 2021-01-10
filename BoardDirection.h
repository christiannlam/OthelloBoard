#include <array>
#include <iostream>

class BoardDirection{
private:
    char cRow;
    char cCol;

public:
    BoardDirection();
    BoardDirection(char row, char col);

    inline char getRowChange(){
        return cRow;
    };
    inline char getColChange(){
        return cCol;
    };

    static std::array<BoardDirection,8> CARDINAL_DIRECTIONS;
};
#include "BoardDirection.h"
using namespace std;

BoardDirection::BoardDirection(): cRow(0), cCol(0) { }
BoardDirection::BoardDirection(char row, char col): cRow(row), cCol(col) { }

array<BoardDirection, 8> BoardDirection::CARDINAL_DIRECTIONS = {
        BoardDirection(-1,-1), BoardDirection(-1,0), BoardDirection(-1,1),
        BoardDirection(0,-1), BoardDirection(0,1), BoardDirection(1,-1),
        BoardDirection(1,0), BoardDirection(1,1)};

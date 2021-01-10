#include "BoardPosition.h"
#include <sstream>

using namespace std;

BoardPosition::BoardPosition(): mRow(0), mCol(0) { }
BoardPosition::BoardPosition(char row, char col): mRow(row), mCol(col) { }

BoardPosition::operator string() const{
    std::ostringstream os;
    os << "(" << int(mRow) << "," << int(mCol) << ")" << endl;
    return os.str();
}

ostream& operator<<(ostream &lhs, BoardPosition rhs){
    lhs << string(rhs);
    return lhs;
}

istream& operator>>(istream &lhs, BoardPosition& rhs){
    char row,col,dummy;
    lhs >> dummy >> row >> dummy >> col >> dummy;
    rhs = BoardPosition(row,col);
    return lhs;
}

bool BoardPosition::operator==(BoardPosition rhs){
    return mRow == rhs.mRow && mCol == rhs.mCol;
}

bool BoardPosition::operator<(BoardPosition rhs) {
    if (mRow < rhs.mRow) {
        return mRow < rhs.mRow;
    } else if (mRow == rhs.mRow) {
        return mCol < rhs.mCol;
    }
    else{
        return false;
    }
}

bool BoardPosition::InBounds(int boardSize) {
    if((mRow > -1 && mRow < boardSize) && (mCol > -1 && mCol < boardSize))
    {
        return true;
    } else{
        return false;
    }
}

bool BoardPosition::InBounds(int rows, int columns) {
    if( (mRow > -1 && mRow < rows) && (mCol > -1 && mCol < columns) )
    {
        return true;
    } else{
        return false;
    }
}

vector<BoardPosition> BoardPosition::GetRectangularPositions(int rows, int columns) {
    vector<BoardPosition> positions;
    for(int i = 0; i < rows; i ++)
    {
        for( int j = 0; j < columns; j++)
        {
            positions.push_back(BoardPosition(i,j));
        }
    }
    return positions;
}

BoardPosition BoardPosition::operator+(BoardDirection dir){
    mRow = mRow + dir.getRowChange();
    mCol = mCol + dir.getColChange();
    return BoardPosition(mRow,mCol);
}

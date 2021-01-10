#include "BoardPosition.h"
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    BoardPosition positionOne = BoardPosition(2,3);
    BoardPosition positionTwo = BoardPosition(3,1);

    cout << "Position One: " << positionOne;
    cout << "Position Two: " << positionTwo;

    cout << "Position One Cordinates: " << int(positionOne.getRow()) << "," << int(positionOne.getCol()) << endl;
    if( positionOne < positionTwo )
    {
        cout << "Position One is less than Position Two" << endl;
    } else{
        cout << "Position Two is greater than Position One" << endl;
    }

    if( positionOne == positionTwo )
    {
        cout << "Position One is equal to Position Two" << endl;
    } else{
        cout << "Position One is not equal to Position Two" << endl;
    }

    if( positionOne.InBounds(4))
    {
        cout << "Position is in bounds of board size" << endl;
    } else{
        cout << "Position is not in bounds of board size" << endl;
    }

    if( positionTwo.InBounds(4,4))
    {
        cout << "Position is in bounds of rows and columns" << endl;
    } else{
        cout << "Position is in bounds of rows and columns" << endl;
    }

    cout << "Rectangular Positions: " << endl;
    vector<BoardPosition> recPositions = positionOne.GetRectangularPositions(3,2);
    for( auto itr = recPositions.begin(); itr != recPositions.end(); itr++)
    {
        cout << int(itr->getRow()) << " " << int(itr->getCol()) << endl;
    }

    BoardDirection changeTwo = BoardDirection::CARDINAL_DIRECTIONS[7];
    cout << "Original Position Two: " << positionTwo;
    cout << "Moving +1 Row , +1 Col" << endl;
    positionTwo = positionTwo + changeTwo;
    cout << "New Position Two: " << positionTwo;

    string cord;
    cout << "Enter a Row and Col: " << endl;
    cin >> cord;
    cout << cord;

}

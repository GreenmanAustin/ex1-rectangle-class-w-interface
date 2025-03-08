/**
Programmer: SHEROO BHAGIA
Project number: 1
Project Desc: Rectangle Class with Interface
Course: COSC-2436-002: Prog Fund III: Data Struct
Date:   03/08/2025
*/

#include <iostream>
#include "Rectangle.h"

using std::cout;
using std::endl;

void stateOut(Rectangle myRectangle){
    cout << "Area:" << myRectangle.getArea() << endl;
    cout << "Width:" << myRectangle.getWidth() << endl;
    cout << "Length:" << myRectangle.getLength() << endl << endl;
}

int main()
{
    Rectangle rectangle1;
    cout << "Initial state of the rectangle" << endl;
    stateOut(rectangle1);

    cout << "After setting length to 7 and width to 2:" << endl;
    rectangle1.set(7, 2);
    stateOut(rectangle1);

    cout << "Trying a negative value of length to -1 and width to 7"<< endl;
    rectangle1.set(-1, 7);
    stateOut(rectangle1);

}
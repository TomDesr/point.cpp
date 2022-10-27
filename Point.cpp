/**
 * Point.cpp
 * Project UID 2e6ea4e086ea6a06753e819c30923369
 *
 * EECS 183
 * Project 4: CoolPics
 *
 * <#Name(s)#>
 * <#uniqname(s)#>
 *
 * <#Description#>
 */

#include "Point.h"

// for the declaration of DIMENSION
#include "utility.h"

// TODO: implement two constructors, setX, getX, setY, getY, read, write, checkRange.
Point::Point() {
    setX(0);
    setY(0);
}

Point::Point(int xVal, int yVal) {
    x = xVal;
    y = yVal;
}

void Point::setX(int xVal) {
    x = xVal;

    return;
}

int Point::getX() {
    return x;
}

void Point::setY(int yVal) {
    y = yVal;

    return;
}

int Point::getY() {
    // TODO: Implement
    // FIXME: returning arbitrary value of 0to avoid compile error
    return y;
}

void Point::read(istream& ins) {
    char trash;
    ins >> trash >> x >> trash >> y >> trash;
    return;
}

void Point::write(ostream& outs) {
    // TODO: Implement
    outs << "(" << checkRange(x) << ", " << checkRange(y) << ")";
    return;
}

int Point::checkRange(int val) {
    // TODO: Implement
    // FIXME: returning arbitrary value of 0 to avoid compile error
    if (val > 0 && val < DIMENSION) {
        return val;
    }
    else if (val < 0) {
        return 0;
    }
    else if (val > DIMENSION - 1) {
        return DIMENSION - 1;
    }
    return 0;
}


// Your code goes above this line.
// Don't change the implementations below!

istream& operator >> (istream& ins,  Point& pt)
{
    pt.read(ins);
    return ins;
}

ostream& operator<< (ostream& outs, Point pt)
{
    pt.write(outs);
    return outs;
}

﻿#include <iostream>
#include <string>
#include "point.h"
#include "cursor.h"
////////////////////////////////////////////////////////////////////////////////
Point Point::setPos(int px, int py)
{
    x = px;
    y = py;
    return *this;
}
////////////////////////////////////////////////////////////////////////////////
Point Point::print(string str) const
{
    SetCursorPosition(x, y);
    std::cout << str;
    return *this;
}
////////////////////////////////////////////////////////////////////////////////
Point Point::clear(void) const
{
    SetCursorPosition(x, y);
    std::cout << "  ";
    return *this;
}
////////////////////////////////////////////////////////////////////////////////
Point Point::setCursorHere(void) const
{
    SetCursorPosition(x, y);
    return *this;
}
////////////////////////////////////////////////////////////////////////////////
Point Point::move(int movement_x, int movement_y)
{
    x += movement_x;
    y += movement_y;
    return *this;
}
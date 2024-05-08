#include "helpers.hpp"

Rect::Rect(int x1, int y1, int x2, int y2) : p1({x1,y1}), p2({x2,y2}) {}

void Rect::operator+=(Rect& other) {
    other.p1+=p1;
    other.p2+=p2;
}

void Point::operator+=(Point& other) {
    other.x+=x;
    other.y+=y;
}

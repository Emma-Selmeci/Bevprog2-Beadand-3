#include "helpers.hpp"

Point::Point(int x, int y) : x(x), y(y) {}
Point::Point() {}

Rect::Rect(int x1, int y1, int x2, int y2) : p1({x1,y1}), p2({x2,y2}) {}

bool isInRect(Point p, Rect r) {
    return p.x >= r.p1.x && p.x <= r.p2.x && p.y >= r.p1.y && p.y <= r.p2.y;
}

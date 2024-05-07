#ifndef HELPERS.HPP
#define HELPERS.HPP

struct Point {
    int x, y;
};

struct Rect {
    Rect(int x1, int y1, int x2, int y2) : p1({x1,y1}), p2({x2,y2}) {}
    Point p1, p2;
};

enum Layer {
    BOTTOM, MIDDLE, TOP
};

#endif // HELPERS

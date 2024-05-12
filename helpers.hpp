#ifndef HELPERS.HPP
#define HELPERS.HPP

struct Point {
    Point();
    Point(int, int);
    int x, y;
};

struct Rect {
    Rect(int x1, int y1, int x2, int y2);
    Point p1, p2;
};

enum Layer {
    BOTTOM/* UwU */, MIDDLE, TOP
};

bool isInRect(Point, Rect);

#endif // HELPERS

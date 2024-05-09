#ifndef HELPERS.HPP
#define HELPERS.HPP

struct Point {
    void operator+= (Point&);
    int x, y;
};

struct Rect {
    Rect(int x1, int y1, int x2, int y2);
    void operator+= (Rect&);
    Point p1, p2;
};

enum Layer {
    BOTTOM/* UwU */, MIDDLE, TOP
};

#endif // HELPERS

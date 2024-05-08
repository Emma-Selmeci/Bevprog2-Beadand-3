#ifndef TESTLABEL.HPP
#define TESTLABEL.HPP

#include "graphicsObject.hpp"

class TestLabel : public GraphicsObject {
private:
public:
    TestLabel(Layer, Rect, ObjectHolder*);
    bool check(event&);
    bool update(event&);
    void draw() const;
    void drop();
};

#endif // TESTLABEL

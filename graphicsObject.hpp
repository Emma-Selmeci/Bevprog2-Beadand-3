#ifndef GRAPHICSOBJECT.HPP
#define GRAPHICSOBJECT.HPP

#include "graphics.hpp"

#include "helpers.hpp"
#include "objectHolder.hpp"

using namespace genv;

class GraphicsObject {
private:
public:
    GraphicsObject(Point pos, ObjectHolder, Layer);
    virtual bool check(event) = 0;
    virtual bool update(event) = 0;
    virtual void draw() const = 0;
};

#endif // GRAPHICSOBJECT

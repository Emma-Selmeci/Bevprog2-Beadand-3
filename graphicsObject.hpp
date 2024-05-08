#ifndef GRAPHICSOBJECT.HPP
#define GRAPHICSOBJECT.HPP

#include "graphics.hpp"

#include "helpers.hpp"
#include "objectHolder.hpp"

using namespace genv;

class GraphicsObject {
protected:
    Layer layer;
    Rect dim; //These 2 members are not const, I might change them for some graphical effect
public:
    GraphicsObject(Layer, Rect dim, ObjectHolder*);
    virtual bool check(event&) = 0;
    virtual bool update(event&) = 0;
    virtual void draw() const = 0;
    virtual void drop() = 0;

    friend ObjectHolder; //Using friend class for the first time. Getters might've been a better idea but I want to try this feature I've been missing from Java
};

#endif // GRAPHICSOBJECT

#include <iostream>
#include "graphicsObject.hpp"

GraphicsObject::GraphicsObject(Layer layer, Rect dim, ObjectHolder* holder) : layer(layer), dim(dim) {
    holder->addObject(this);
}

GraphicsObject::GraphicsObject(Rect dim, ObjectHolder* holder) : layer(layer), dim(dim) {
    holder->scaleObject(this);
}

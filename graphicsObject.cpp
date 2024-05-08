#include <iostream>
#include "graphicsObject.hpp"

GraphicsObject::GraphicsObject(Layer layer, Rect dim, ObjectHolder* holder) : layer(layer), dim(dim) {
    holder->addObject(this);
    std::cout << "Passed dim adress and its values in GraphicsObject() " << &dim << " " << dim.p1.x << " "  << dim.p2.x << "\n";
    //this->layer = layer;
    //this->dim = dim;
}

//layer(layer), dim(holder->addObject(this));

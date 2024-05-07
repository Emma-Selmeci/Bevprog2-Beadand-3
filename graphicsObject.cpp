#include "graphicsObject.hpp"

GraphicsObject::GraphicsObject(Layer layer, Point pos, ObjectHolder* holder) : layer(layer), pos(holder->addObject(this)){}

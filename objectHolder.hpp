#ifndef OBJECTHOLDER.HPP
#define OBJECTHOLDER.HPP

#include <vector>

#include "graphics.hpp"

#include "helpers.hpp"

using namespace genv;

/*
Class for the main window and for all the Panels in my library
*/

class GraphicsObject;

class ObjectHolder {
protected:
    GraphicsObject* focusedObject = 0;
    std::vector<GraphicsObject*> layeredObjects[3]; //The GraphicsObjects are ordered into layers
    virtual Point getCoordDelta(Point&) const = 0; //Method called by addObject() to determine the offset for the added GraphicsObject
    virtual bool checkObjects(event&);
    void draw() const;
public:
    Point addObject(GraphicsObject*); //Adds the object to this holder and returns the coordinates
};

#endif // OBJECTHOLDER

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
    virtual void getCoordDelta(Rect&) const = 0; //Method called by addObject() to determine the offset for the added GraphicsObject
    virtual bool checkObjects(event&);
    virtual void drawObjects() const;
public:
    Rect& addObject(GraphicsObject*); //Adds the object to this holder and returns the coordinates
    Rect& scaleObject(GraphicsObject*);
};

#endif // OBJECTHOLDER

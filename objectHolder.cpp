#include <iostream>

#include "objectHolder.hpp"

#include "graphicsObject.hpp"

Rect& ObjectHolder::addObject(GraphicsObject* newGraphicsObject) {

    std::cout << "Adress of TestLabel in addObject() " << newGraphicsObject << "\n";
    std::cout << "Passed dim adress and its values in addObject() " << &newGraphicsObject->dim << " " << newGraphicsObject->dim.p1.x << " "  << newGraphicsObject->dim.p2.x << "\n";

    layeredObjects[newGraphicsObject->layer].push_back(newGraphicsObject);

    getCoordDelta(newGraphicsObject->dim);

    return newGraphicsObject->dim;
}

bool ObjectHolder::checkObjects(event& ev) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < layeredObjects[i].size(); j++) {
            if(layeredObjects[i][j]->check(ev)) {
                if(focusedObject != 0 && focusedObject != layeredObjects[i][j]) focusedObject->drop();
                focusedObject = layeredObjects[i][j];
                return true;
            }
        }
    }
    return false;
}

void ObjectHolder::drawObjects() const {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < layeredObjects[i].size(); j++) {
            layeredObjects[i][j]->draw();
        }
    }
}

#include <iostream>

#include "objectHolder.hpp"

#include "graphicsObject.hpp"

Rect& ObjectHolder::addObject(GraphicsObject* newGraphicsObject) {

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

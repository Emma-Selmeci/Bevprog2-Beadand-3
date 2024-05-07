#include "objectHolder.hpp"

#include "graphicsObject.hpp""

Point ObjectHolder::addObject(GraphicsObject* newGraphicsObject) {

    layeredObjects[newGraphicsObject->layer].push_back(newGraphicsObject);

    return getCoordDelta(newGraphicsObject->pos);
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

void ObjectHolder::draw() const {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < layeredObjects[i].size(); j++) {
            layeredObjects[i][j]->draw();
        }
    }
}

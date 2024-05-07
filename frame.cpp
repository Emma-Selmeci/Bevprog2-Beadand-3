#include "frame.hpp"

#include "graphics.hpp"

using namespace genv;

Frame::Frame(Point size) : size(size) {}

void Frame::start() {
    gout.open(size.x,size.y);
    event ev;
    gin.timer(1000/60);
    while(gin >> ev) {
        gout << move_to(0,0) << color(0,0,0) << box_to(size.x,size.y);
        bool didWeTakeAnAction = false;
        if(focusedObject != 0) didWeTakeAnAction = focusedObject->update(ev);
        if(!didWeTakeAnAction) {
            checkObjects(ev);
        }
        draw();
        gout << refresh;
    }
}

Point Frame::getCoordDelta(Point& p) const {return p;}

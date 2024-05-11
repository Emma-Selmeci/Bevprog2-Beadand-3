#include "frame.hpp"

#include "graphics.hpp"
#include "mainmenu/mainMenuPanel.hpp"

using namespace genv;

Frame::Frame(Point size) : size(size) {}

void Frame::start() {
    gout.open(size.x,size.y);
    event ev;
    gin.timer(1000/60);

    //Temp
    currentMenu = new MainMenuPanel(this);

    while(gin >> ev) {
        gout << move_to(0,0) << color(0,0,0) << box_to(size.x,size.y);
        bool didWeTakeAnAction = false;
        if(focusedObject != 0) didWeTakeAnAction = focusedObject->update(ev);
        if(!didWeTakeAnAction) {
            checkObjects(ev);
        }
        drawObjects();
        gout << refresh;
    }
}

void Frame::drawObjects() const {
    currentMenu->draw();
    ObjectHolder::drawObjects();
}

void Frame::getCoordDelta(Rect& p) const {}

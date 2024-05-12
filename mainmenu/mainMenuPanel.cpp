#include <iostream> //For debugging

#include "mainMenuPanel.hpp"

#include "..\helpers.hpp"

const static int highlightx1 = 55, highlightx2 = 200, highlighty = 245, highlightDelta = 30;

MainMenuPanel::MainMenuPanel(ObjectHolder* holder) :
    Panel(Rect(0,0,1000,600),holder),
    backGround("./textures/mainMenuBackground.kep",Layer::BOTTOM,Rect(0,0,0,0),this),
    barbieHead("./textures/barbieHead.kep",Layer::BOTTOM,Rect(55,250,0,0),this) {
    barbieHead.setTransparent(false);
    gout.load_font("classic.ttf",20,false);
}

void MainMenuPanel::draw() const {
    backGround.draw();
    if(state != -1) barbieHead.draw();
    gout << move_to(60,115) << text("A GAME ABOUT THE MAGICAL") << move_to(60,135) << text("POWER OF FRIENDSHIP");
    gout << color(0,0,0) << move_to(100,250) << text("Start Game") << move_to(100,280) << text("Exit");
}

bool MainMenuPanel::check(event& ev) {
    return true;
}

bool MainMenuPanel::update(event& ev) {
    if(ev.type == ev_mouse && ev.button == 0) {
        if(isInRect({ev.pos_x,ev.pos_y},{highlightx1,highlighty,highlightx2,highlighty+highlightDelta})) {
            state = 0;
        } else if (isInRect({ev.pos_x,ev.pos_y},{highlightx1,highlighty+highlightDelta,highlightx2,highlighty+highlightDelta*2})) {
            state = 1;
        } else state = -1;
        if(state != -1) {
        barbieHead.dim.p1.y = highlighty+state*highlightDelta;
        }
    } else if(ev.type == ev_mouse && ev.button == 1) {
        if(isInRect({ev.pos_x,ev.pos_y},{highlightx1,highlighty+highlightDelta,highlightx2,highlighty+highlightDelta*2})) exit(1);
        if(isInRect({ev.pos_x,ev.pos_y},{highlightx1,highlighty,highlightx2,highlighty+highlightDelta})) {
            std::cout << "Entering Game";
        }
    }
    return true;
}

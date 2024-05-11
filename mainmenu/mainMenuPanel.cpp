#include "mainMenuPanel.hpp"

#include "..\helpers.hpp"

MainMenuPanel::MainMenuPanel(ObjectHolder* holder) :
    Panel(Rect(0,0,1000,600),holder),
    backGround("./textures/mainMenuBackground.kep",Layer::BOTTOM,Rect(0,0,1000,600),this) {

}

void MainMenuPanel::draw() const {
    backGround.draw();
}

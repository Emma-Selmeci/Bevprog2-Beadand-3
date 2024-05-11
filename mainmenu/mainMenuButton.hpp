#ifndef MAINMENUBUTTON.HPP
#define MAINMENUBUTTON.HPP

#include "..\panel.hpp"
#include "..\helpers.hpp"
#include "..\objectHolder.hpp"


class MainMenuButton : public Panel {
public:
    MainMenuButton(std::string text, Rect, ObjectHolder*, Layer);
};

#endif // MAINMENUBUTTON

#ifndef MAINMENUPANEL.HPP
#define MAINMENUPANEL.HPP

#include "graphics.hpp"

#include "..\panel.hpp"
#include "..\imageLabel.hpp"

using namespace genv;

class MainMenuPanel : public Panel {
    ImageLabel backGround;
    ImageLabel barbieHead;
    int state = -1;
public:
    MainMenuPanel(ObjectHolder*);
    void draw() const override;
    bool check(event& ev) override;
    bool update(event& ev) override;
};

#endif // MAINMENUPANEL

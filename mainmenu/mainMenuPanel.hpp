#ifndef MAINMENUPANEL.HPP
#define MAINMENUPANEL.HPP

#include "..\panel.hpp"
#include "..\imageLabel.hpp"

class MainMenuPanel : public Panel {
    ImageLabel backGround;
public:
    MainMenuPanel(ObjectHolder*);
    void draw() const override;
};

#endif // MAINMENUPANEL

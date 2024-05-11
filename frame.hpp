#ifndef FRAME.HPP
#define FRAME.HPP

#include "graphicsObject.hpp"

/*
This class is designed to be the master class which controls all graphics events. This might be a terrible mistake to do.
*/

class Frame : public ObjectHolder { //I'd love to make this a singleton but I'm still not confident enough in C++ for that :(
private:
    const Point size;
    GraphicsObject* currentMenu;
    void getCoordDelta(Rect&) const final override; //That's a lot of modifiers!
    void drawObjects() const override;
public:
    Frame(Point size);
    void start();
};

#endif // FRAME

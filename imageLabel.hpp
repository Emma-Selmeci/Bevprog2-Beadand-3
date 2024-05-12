#ifndef IMAGELABEL.HPP
#define IMAGELABEL.HPP

#include <vector>

#include "graphics.hpp"

#include "graphicsObject.hpp"
#include "helpers.hpp"
#include "objectHolder.hpp"
#include "imageLoader.hpp"

class MainMenuPanel;

using namespace genv;

class ImageLabel : public GraphicsObject {
    mutable canvas* c; //We're using mutable. Fun!
public:
    ImageLabel(std::string path, Layer layer, Rect dim, ObjectHolder* holder);
    ImageLabel(ImageLoader*, Layer layer, Rect dim, ObjectHolder* holder); //Assuming the canvas is set to transparent and dim already contains width and height
    //This class will most likely never be checked, updated or dropped
    bool check(event&);
    bool update(event&);
    virtual void draw() const;
    virtual void drop();
    void setTransparent(bool transparent);
    friend class MainMenuPanel;
};

#endif // IMAGELABEL


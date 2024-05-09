#ifndef IMAGELABEL.HPP
#define IMAGELABEL.HPP

#include <vector>

#include "graphics.hpp"

#include "graphicsObject.hpp"
#include "helpers.hpp"
#include "objectHolder.hpp"

using namespace genv;

class ImageLabel : public GraphicsObject {
    std::vector<short int> data;
    mutable canvas c; //We're using mutable. Fun!
public:
    ImageLabel(std::string path, Layer layer, Rect dim, ObjectHolder* holder);
    //This class will most likely never be checked, updated or dropped
    bool check(event&);
    bool update(event&);
    virtual void draw() const;
    virtual void drop();
};

#endif // IMAGELABEL


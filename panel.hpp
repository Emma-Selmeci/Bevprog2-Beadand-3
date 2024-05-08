#ifndef PANEL.HPP
#define PANEL.HPP

#include "graphics.hpp"

#include "helpers.hpp"
#include "graphicsObject.hpp"
#include "objectHolder.hpp"

using namespace genv;

class Panel : public GraphicsObject, public ObjectHolder { //Java didn't have multiple inheritance, so now I'm enjoying every moment of it! (This would've worked in Java as well though by objectHolder being an Interface)
private:
    virtual void getCoordDelta(Rect&) const override final;
public:
    using GraphicsObject::GraphicsObject;
    virtual bool check(event&) override;
    virtual bool update(event&) override;
    virtual void draw() const override;
    virtual void drop() override;

};

#endif // PANEL

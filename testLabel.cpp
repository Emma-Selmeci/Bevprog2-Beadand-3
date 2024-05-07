#include "testLabel.hpp"


    TestLabel::TestLabel(Layer layer, Rect dimensions, ObjectHolder* holder) : GraphicsObject(layer,dimensions.p1,holder){
        size = dimensions.p2;
    }

    bool TestLabel::check(event& ev) {return false;}
    bool TestLabel::update(event& ev) {return false;}
    void TestLabel::drop() {}
    void TestLabel::draw() const {
        gout << color(200,200,200) << move_to(pos.x, pos.y) << box(size.x,size.y);
    }

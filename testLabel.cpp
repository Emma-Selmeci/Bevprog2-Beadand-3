#include "testLabel.hpp"
#include <iostream> //For debugging


    TestLabel::TestLabel(Layer layer, Rect dim, ObjectHolder* holder) : GraphicsObject(layer,dim,holder) {
    }



    bool TestLabel::check(event& ev) {return false;}
    bool TestLabel::update(event& ev) {return false;}
    void TestLabel::drop() {}
    void TestLabel::draw() const {
        gout << color(200,200,200) << move_to(dim.p1.x, dim.p1.y) << box(dim.p2.x,dim.p2.y);
    }

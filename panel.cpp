#include "panel.hpp"

void Panel::getCoordDelta(Rect& other_dim) const {
    other_dim.p1.x += dim.p1.x;
    other_dim.p1.y += dim.p1.y;
    other_dim.p2.x += dim.p2.x;
    other_dim.p2.y += dim.p2.y;
}

bool Panel::check(event& ev) {}
bool Panel::update(event& ev) {}

void Panel::draw() const {
    drawObjects();
}
void Panel::drop() {}

#include <iostream>
#include "panel.hpp"

#define ws << " " <<

void Panel::getCoordDelta(Rect& other_dim) const {
    std::cout << dim.p1.x ws dim.p1.y ws dim.p2.x ws dim.p2.y << "\n";
    std::cout << other_dim.p1.x ws other_dim.p1.y ws other_dim.p2.x ws other_dim.p2.y << "\n";
    other_dim.p1.x += dim.p1.x;
    other_dim.p1.y += dim.p1.y;
}

bool Panel::check(event& ev) {}
bool Panel::update(event& ev) {}

void Panel::draw() const {
    drawObjects();
}
void Panel::drop() {}

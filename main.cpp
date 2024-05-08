#include <iostream>

#include "helpers.hpp"
#include "frame.hpp"
#include "testLabel.hpp"
#include "panel.hpp"



int main() {
    Rect r1(100,0,100,100);
    Rect r2(0,100,200,200);

    Frame f({1000,600});
    Panel* p = new Panel(Layer::TOP,r2,&f);
    new TestLabel(Layer::TOP,r1,p); //Using implicit conversion or whatever this is called

    f.start();
}

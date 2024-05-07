#include <iostream>

#include "helpers.hpp"
#include "frame.hpp"
#include "testLabel.hpp"

int main() {
    Frame f({1000,600});
    f.addObject(new TestLabel(Layer::TOP,Rect(0,0,100,100),&f));
    f.start();
}

#include <iostream>

#include "helpers.hpp"
#include "frame.hpp"
#include "testLabel.hpp"
#include "panel.hpp"
#include "imageLabel.hpp"
#include "imageLoader.hpp"

int main() {
    Frame f({1000,600});
    new ImageLabel("1pb.kep",Layer::TOP,Rect(0,0,0,0),&f);
    f.start();
}

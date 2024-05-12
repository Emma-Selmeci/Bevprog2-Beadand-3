#include <iostream>
#include <fstream>

#include "imageLabel.hpp"

bool ImageLabel::check(event&) {return false;}
bool ImageLabel::update(event&) {return false;}
void ImageLabel::drop() {}

ImageLabel::ImageLabel(ImageLoader* loader, Layer layer, Rect dim, ObjectHolder* holder) : GraphicsObject(layer,dim,holder) {
    dim.p2.x = loader->size.x;
    dim.p2.y = loader->size.y;
    c = loader->c;
}

ImageLabel::ImageLabel(std::string path, Layer layer, Rect dim, ObjectHolder* holder) : GraphicsObject(layer,dim,holder) {
    std::fstream fin(path);
    std::string input;

    if(!fin.is_open()) {
        std::cout << "File open is not succesful!";
        exit(1);
    }

    fin >> input;
    dim.p2.x = stoi(input);
    fin >> input;
    dim.p2.y = stoi(input);

    c = new canvas();
    c->open(dim.p2.x,dim.p2.y);
    c->transparent(true);

    //We're assuming that the file is not corrupted = there are width*height*3 data points in there

    int r, g, b;
    int x=0, y=0;
    for(int i = 0; i < dim.p2.x*dim.p2.y; i++) {

        fin >> input;
        r = stoi(input);
        fin >> input;
        g = stoi(input);
        fin >> input;
        b = stoi(input);

        *c << color(r,g,b) << move_to(x,y) << dot;
        x++;
            if(x == dim.p2.x)
            {
                x = 0;
                y++;
            }
    }
}

void ImageLabel::draw() const {
    gout << stamp(*c,dim.p1.x,dim.p1.y);
}

void ImageLabel::setTransparent(bool transparent) {
    c->transparent(transparent);
}

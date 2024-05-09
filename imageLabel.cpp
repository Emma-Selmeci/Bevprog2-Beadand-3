#include <iostream>
#include <fstream>

#include "imageLabel.hpp"

bool ImageLabel::check(event&) {return false;}
bool ImageLabel::update(event&) {return false;}
void ImageLabel::drop() {}

ImageLabel::ImageLabel(std::string path, Layer layer, Rect dim, ObjectHolder* holder) : GraphicsObject(layer,dim,holder) {
    c.transparent(true);
    std::fstream fin(path);
    std::string input;

    if(!fin.is_open()) {
        std::cout << "File opening not succesful!";
        exit(1);
    }

    fin >> input;
    dim.p2.x = stoi(input);
    fin >> input;
    dim.p2.y = stoi(input);

    while(fin >> input)
        {

            data.push_back(stoi(input));
        }
    c.open(dim.p2.x,dim.p2.y);

    int x = 0, y = 0;
        for(int i = 0; i < data.size()/3; i++)
        {
            c << color(data[i*3],data[i*3+1],data[i*3+2]) << move_to(x,y) << dot;
            //cout << "Drawing color " << data[i*3] ws data[i*3+1] ws data[i*3+2] << " to coord " << x ws y << "\n";
            x++;
            if(x == dim.p2.x)
            {
                x = 0;
                y++;
            }
        }
}

void ImageLabel::draw() const {
    gout << stamp(c,dim.p1.x,dim.p1.y);
}

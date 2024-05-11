#include "fstream"

#include "iostream"

#include "imageLoader.hpp"

ImageLoader::ImageLoader(std::string filePath) {
    std::fstream fin(filePath);
    std::string input;

    if(!fin.is_open()) {
        std::cout << "File open is not succesful!";
        exit(1);
    }

    fin >> input;
    size.x = stoi(input);
    fin >> input;
    size.y = stoi(input);

    c = new canvas();
    c->open(size.x,size.y);
    c->transparent(true);

    int r, g, b;
    int x=0, y=0;
    for(int i = 0; i < size.x*size.y; i++) {

        fin >> input;
        r = stoi(input);
        fin >> input;
        g = stoi(input);
        fin >> input;
        b = stoi(input);

        *c << color(r,g,b) << move_to(x,y) << dot;
        x++;
            if(x == size.x)
            {
                x = 0;
                y++;
            }
    }
}

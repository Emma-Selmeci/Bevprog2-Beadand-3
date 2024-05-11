#ifndef IMAGELOADER.HPP
#define IMAGELOADER.HPP

#include "graphics.hpp"

#include "helpers.hpp"

/*
I'm expecting there to be numerous times when a texture is reused. I'll use this class
*/

using namespace genv;

class ImageLoader {
    canvas* c;
    Point size;
public:
    ImageLoader(std::string filePath);
    friend class ImageLabel;
};

#endif // IMAGELOADER

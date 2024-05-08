#include <iostream>

#include "helpers.hpp"
#include "frame.hpp"
#include "testLabel.hpp"


struct MyStruct {
    int i;
    MyStruct(int initialValue) : i(writeI(this,initialValue)) {}
    int writeI(MyStruct* m, int initialValue) {
        return initialValue + 10;
    }
};

int main() {
    Frame f({1000,600});
    Rect r(100,100,200,200);

    MyStruct m();

    std::cout << "Main method memory adress " << &r << "\n";
    new TestLabel(Layer::TOP,r,&f); //Using implicit conversion or whatever this is called
    f.start();
}

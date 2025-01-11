#include <g15_oop/triangle.h>

#include <iostream>


namespace G15_OOP {

void Triangle::draw() const {

    // 
    std::cout << "Triangle::draw height = " << this->height() << " width = " << this->width() << std::endl;

}

}

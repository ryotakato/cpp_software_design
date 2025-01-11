#include <g15_oop/draw_triangle.h>
#include <g15_oop/triangle.h>

#include <iostream>


namespace G15_OOP {

void draw(Triangle const& triangle) {

    // 
    std::cout << "Triangle::draw height = " << triangle.height() << " width = " << triangle.width() << std::endl;

}

}

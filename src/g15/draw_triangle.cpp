#include <g15/draw_triangle.h>
#include <g15/triangle.h>

#include <iostream>


namespace G15 {

void draw(Triangle const& triangle) {

    // 
    std::cout << "Triangle::draw height = " << triangle.height() << " width = " << triangle.width() << std::endl;

}

}

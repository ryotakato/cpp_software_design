#include <g15/draw_circle.h>
#include <g15/circle.h>

#include <iostream>

namespace G15 {

void draw( Circle const& c ) {

    // 
    std::cout << "Circle::draw radius = " << c.radius() << std::endl;

}

}

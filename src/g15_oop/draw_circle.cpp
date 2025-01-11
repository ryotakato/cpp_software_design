#include <g15_oop/draw_circle.h>
#include <g15_oop/circle.h>

#include <iostream>

namespace G15_OOP {

void draw( Circle const& c ) {

    // 
    std::cout << "Circle::draw radius = " << c.radius() << std::endl;

}

}

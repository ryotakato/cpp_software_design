#include <g15/draw_square.h>
#include <g15/square.h>

#include <iostream>


namespace G15 {

void draw(Square const& square) {

    // 
    std::cout << "Square::draw side = " << square.side() << std::endl;

}

}

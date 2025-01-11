#include <g15_oop/draw_square.h>
#include <g15_oop/square.h>

#include <iostream>


namespace G15_OOP {

void draw(Square const& square) {

    // 
    std::cout << "Square::draw side = " << square.side() << std::endl;

}

}

#include <g15_oop/draw_all_shapes.h>
#include <g15_oop/circle.h>
#include <g15_oop/square.h>
#include <g15_oop/triangle.h>


namespace G15_OOP {

void draw_all_shapes(std::vector<std::unique_ptr<Shape>> const& shapes) {
    
    for( auto const& shape : shapes ) {
        shape->draw();
    }

}

}

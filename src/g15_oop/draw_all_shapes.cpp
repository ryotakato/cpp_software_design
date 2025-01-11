#include <g15_oop/draw_all_shapes.h>
#include <g15_oop/circle.h>
#include <g15_oop/square.h>
#include <g15_oop/triangle.h>
#include <g15_oop/draw_circle.h>
#include <g15_oop/draw_square.h>
#include <g15_oop/draw_triangle.h>


namespace G15_OOP {

void draw_all_shapes(std::vector<std::unique_ptr<Shape>> const& shapes) {
    
    for( auto const& shape : shapes ) {
        switch (shape->getType()) {
            case circle:
                draw(static_cast<Circle const&>(*shape));
                break;
            case square:
                draw(static_cast<Square const&>(*shape));
                break;
            case triangle:
                draw(static_cast<Triangle const&>(*shape));
                break;
        }
    }

}

}

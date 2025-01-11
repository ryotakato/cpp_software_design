#include <g15/draw_all_shapes.h>
#include <g15/circle.h>
#include <g15/square.h>
#include <g15/triangle.h>
#include <g15/draw_circle.h>
#include <g15/draw_square.h>
#include <g15/draw_triangle.h>

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

#include <g16/draw_all_shapes.h>
#include <g16/draw.h>
#include <g16/shape.h>


namespace G16 {

    void draw_all_shapes(std::vector<std::unique_ptr<Shape>> const& shapes) {
        
        for( auto const& shape : shapes ) {
            shape->accept(Draw{});
        }
    
    }

}

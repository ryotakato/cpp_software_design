module;
#include <iostream>
#include <memory>
#include <vector>

#include <g15_oop/circle.h>
#include <g15_oop/square.h>
#include <g15_oop/triangle.h>
#include <g15_oop/draw_all_shapes.h>


export module G15_OOP;

namespace G15_OOP {

    export int main_g15_oop() {

        std::cout << "main_g15_oop" << std::endl;

        using Shapes = std::vector<std::unique_ptr<Shape>>;

        Shapes shapes {};
    
        shapes.emplace_back(std::make_unique<Circle>(2.3));
        shapes.emplace_back(std::make_unique<Square>(1.2));
        shapes.emplace_back(std::make_unique<Circle>(4.1));
        shapes.emplace_back(std::make_unique<Triangle>(5.5, 3.2));

        draw_all_shapes(shapes);


        return 0;
    }


}

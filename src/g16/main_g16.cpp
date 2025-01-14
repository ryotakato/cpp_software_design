module;
#include <cstdlib>
#include <iostream>
#include <memory>
#include <vector>

#include <g16/circle.h>
#include <g16/square.h>
#include <g16/draw_all_shapes.h>


export module G16;

namespace G16 {

    export int main_g16() {

        std::cout << "main_g16" << std::endl;

        using Shapes = std::vector<std::unique_ptr<Shape>>;

        Shapes shapes {};
    
        shapes.emplace_back(std::make_unique<Circle>(2.3));
        shapes.emplace_back(std::make_unique<Square>(1.2));
        shapes.emplace_back(std::make_unique<Circle>(4.1));

        draw_all_shapes(shapes);


        return EXIT_SUCCESS;
    }


}

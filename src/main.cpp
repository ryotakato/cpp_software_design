#include <iostream>
#include <memory>
#include <vector>

#include <g15/circle.h>
#include <g15/square.h>
#include <g15/triangle.h>
#include <g15/draw_all_shapes.h>

int main(int argc, char* argv[]) {
    std::cout << "~~~~~~~~~~~" << std::endl;
    std::cout << "C++ Software Design" << std::endl;
    std::cout << "~~~~~~~~~~~" << std::endl;

    for (int i = 0; i < argc; i++) {
        std::cout << "argv[" << i << "]:" << argv[i] << std::endl;
    }

    using Shapes = std::vector<std::unique_ptr<Shape>>;

    Shapes shapes {};
    
    shapes.emplace_back(std::make_unique<Circle>(2.3));
    shapes.emplace_back(std::make_unique<Square>(1.2));
    shapes.emplace_back(std::make_unique<Circle>(4.1));
    shapes.emplace_back(std::make_unique<Triangle>(5.5, 3.2));

    draw_all_shapes(shapes);


    return 0;
}

#include <memory>
#include <vector>

namespace G15_OOP {

class Shape;

void draw_all_shapes(std::vector<std::unique_ptr<Shape>> const& shapes);

}

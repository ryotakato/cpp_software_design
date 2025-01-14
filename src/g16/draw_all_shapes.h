#include <memory>
#include <vector>

namespace G16 {

    class Shape;

    void draw_all_shapes(std::vector<std::unique_ptr<Shape>> const& shapes);

}

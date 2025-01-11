#include <g15_oop/point.h>
#include <g15_oop/shape.h>

namespace G15_OOP {

class Triangle : public Shape {
    public:
        explicit Triangle(double height, double width) : height_(height), width_(width) {
            /* Checking that the given height,width is valid */
        }

        double height() const { return height_; }
        double width() const { return width_; }
        Point center() const { return center_; }

        void draw() const override;

    private:
        double height_;
        double width_;
        Point center_{};
};

}

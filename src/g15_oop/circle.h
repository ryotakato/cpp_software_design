#include <g15_oop/point.h>
#include <g15_oop/shape.h>

namespace G15_OOP {

class Circle : public Shape {
    public:
        explicit Circle(double radius) : Shape( circle), radius_(radius) {
            /* Checking that the given radius is valid */
        }

        double radius() const { return radius_; }
        Point center() const { return center_; }

    private:
        double radius_;
        Point center_{};
};

}

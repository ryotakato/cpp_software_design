#include <g15_oop/point.h>
#include <g15_oop/shape.h>

namespace G15_OOP {

class Square : public Shape {
    public:
        explicit Square(double side) : side_(side) {
            /* Checking that the given side length is valid */
        }

        double side() const { return side_; }
        Point center() const { return center_; }

        void draw() const override;

    private:
        double side_;
        Point center_{};
};

}

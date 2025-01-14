#include <g16/point.h>
#include <g16/shape.h>
#include <g16/shape_visitor.h>

namespace G16 {

    class Circle : public Shape {
        public:
            explicit Circle(double radius) : radius_(radius) {
                /* Checking that the given radius is valid */
            }

            void accept(ShapeVisitor const& v) override { v.visit(*this); }
    
            double radius() const { return radius_; }
    
        private:
            double radius_;
    };

}

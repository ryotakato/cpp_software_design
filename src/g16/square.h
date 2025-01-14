#include <g16/point.h>
#include <g16/shape.h>
#include <g16/shape_visitor.h>

namespace G16 {

    class Square : public Shape {
        public:
            explicit Square(double side) : side_(side) {
                /* Checking that the given side length is valid */
            }

            void accept(ShapeVisitor const& v) override { v.visit(*this);}
    
            double side() const { return side_; }
    
        private:
            double side_;
    };

}

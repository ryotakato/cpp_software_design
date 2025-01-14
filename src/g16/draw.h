#include <iostream>

#include <g16/circle.h>
#include <g16/square.h>
#include <g16/shape_visitor.h>

namespace G16 {

    class Draw : public ShapeVisitor {
        public:
            void visit(Circle const& c) const override {

                std::cout << "Circle::draw radius = " << c.radius() << std::endl;
            }
            void visit(Square const& s) const override {

                std::cout << "Square::draw side = " << s.side() << std::endl;
            }
    };

}


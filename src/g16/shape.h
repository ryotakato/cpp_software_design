#ifndef G16_SHAPE_
#define G16_SHAPE_

#include <g16/shape_visitor.h>

namespace G16 {

    class Shape {
        public:
            //virtual ~Shape() = default;
            virtual void accept(ShapeVisitor const& v) = 0;


    };

}

#endif


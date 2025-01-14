#ifndef G16_SHAPE_VISITOR_
#define G16_SHAPE_VISITOR_


namespace G16 {

    class Circle;
    class Square;

    class ShapeVisitor {
        public:
            virtual ~ShapeVisitor() = default;
            virtual void visit(Circle const&) const = 0;
            virtual void visit(Square const&) const = 0;


    };
}

#endif

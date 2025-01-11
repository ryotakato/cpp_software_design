#ifndef G15_OOP_SHAPE_
#define G15_OOP_SHAPE_

namespace G15_OOP {

enum ShapeType {
    circle,
    square,
    triangle
};

class Shape {
    protected:
        explicit Shape(ShapeType type) : type_(type) {}

    public:
        virtual ~Shape() = default;

        ShapeType getType() const { return type_; }

    private:
        ShapeType type_;

};

}

#endif

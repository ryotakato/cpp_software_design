#ifndef G15_SHAPE_
#define G15_SHAPE_


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

#endif

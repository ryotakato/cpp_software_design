#ifndef G15_OOP_SHAPE_
#define G15_OOP_SHAPE_

namespace G15_OOP {

class Shape {
    public:
        Shape() = default;

        //virtual ~Shape() = default;
        
        virtual void draw() const = 0;

};

}

#endif

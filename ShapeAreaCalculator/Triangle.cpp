#include "Triangle.h"

namespace shapes {
    Triangle::Triangle() : base(0.0), height(0.0) {} //triangle specifications
    Triangle::Triangle(float b, float h) : base(b), height(h) {}

    Triangle::~Triangle() {} //destructor

    float Triangle::getBase() const {
        return base;
    }

    float Triangle::getHeight() const {
        return height;
    }

    void Triangle::setBase(float b) {
        base = b;
    }

    void Triangle::setHeight(float h) {
        height = h;
    }
}

#include "Cir.h"

namespace shapes {
 
    Circle::Circle() : radius(0.0) {} //circle specifications

    Circle::Circle(float r) : radius(r) {}

    Circle::~Circle() {} //destructor

    float Circle::getRadius() const {
        return radius;
    }

    void Circle::setRadius(float r) {
        radius = r;
    }
}

#include "Square.h"
#include <iostream>

namespace shapes {

Square::Square() : side_length_(0.0) {}

Square::Square(double side_length) : side_length_(side_length) {}

Square::~Square() = default;

double Square::GetSideLength() const { return side_length_; }

void Square::SetSideLength(double side_length) { side_length_ = side_length; }

} // namespace shapes

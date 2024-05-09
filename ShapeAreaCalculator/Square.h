#ifndef SQUARE_H
#define SQUARE_H

#include "shapes.h"

namespace shapes {

class Square {
public:
  // Default and overloaded constructors
  Square();
  Square(double side_length);

  // Destructor
  ~Square();

  // Accessor methods
  double GetSideLength() const;
  void SetSideLength(double side_length);

private:
  double side_length_;
};

} // namespace shapes

#endif

#ifndef CIRCLE_H
#define CIRCLE_H

#include "shapes.h"

namespace shapes {

class Circle {
public:
  // Default and overloaded constructors
  Circle();
  Circle(double radius);

  // Destructor
  ~Circle();

  // Accessor methods
  double GetRadius() const;
  void SetRadius(double radius);

private:
  double radius_;
};

} // namespace shapes

#endif

#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "shapes.h"

namespace shapes {

class Triangle {
public:
  // Default and overloaded constructors
  Triangle();
  Triangle(double base, double height);

  // Destructor
  ~Triangle();

  // Accessor methods
  double GetBase() const;
  void SetBase(double base);

  double GetHeight() const;
  void SetHeight(double height);

private:
  double base_;
  double height_;
};

} // namespace shapes

#endif

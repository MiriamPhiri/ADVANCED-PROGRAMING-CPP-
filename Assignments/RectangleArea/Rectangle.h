#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
public:
  // Default constructor initializes length and width to 0.0
  Rectangle() : length_(0.0), width_(0.0) {}

  // Overloaded constructor to initialize length and width
  Rectangle(double length, double width) : length_(length), width_(width) {}

  // create a destructor which is empty for now
  ~Rectangle() = default;

  // Accessor methods to set length and width
  void SetLength(double length) { length_ = length; }
  void SetWidth(double width) { width_ = width; }

  // Accessor methods to get length and width
  double GetLength() const { return length_; }
  double GetWidth() const { return width_; }

  // Function to calculate and return area
  double CalculateArea() const { return length_ * width_; }

private:
  double length_;
  double width_;
};

#endif

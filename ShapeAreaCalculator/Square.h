#ifndef SQUARE_H
#define SQUARE_H

namespace shapes {
    class Square {
    private:
        float sideLength;
        
    public:
        Square();  // Default constructor
        Square(float side);  // Overloaded constructor
        ~Square();  // Destructor
        
        // Accessors
        float getSideLength() const;
        void setSideLength(float side);
    };
}

#endif

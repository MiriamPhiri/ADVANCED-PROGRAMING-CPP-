#ifndef CIRCLE_H
#define CIRCLE_H

namespace shapes {
    class Circle {
    private:
        float radius;
        
    public:
        Circle();  // Default constructor
        Circle(float r);  // Overloaded constructor
        ~Circle();  // Destructor
        
        // Accessors
        float getRadius() const;
        void setRadius(float r);
    };
}

#endif

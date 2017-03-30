//rectangle.h
class Rectangle
{
public:
    //Classes for the exceptions
    class exceptionLength{};
    class exceptionWidth{};
    
    //Sets default values
    Rectangle (double = 1.0, double = 1.0);
    
    //Set functions
    void setRectangle(double, double);
    void setLength(double);
    void setWidth(double);
    
    //Get functions
    double getLength();
    double getWidth();
    
    //Output function
    void output();
private:
    //Data members
    double length;
    double width;
};

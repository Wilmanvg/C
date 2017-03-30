#include <iostream>
#include <iomanip>
#include "rectangle.h"
using namespace std;

Rectangle::Rectangle (double length, double width)
{
    //Constructor that sets values
    
    setRectangle (length, width);
}

void Rectangle::setRectangle (double l, double w)
{
    //Sets the values of the rectangle
    setLength(l);
    setWidth(w);
}

void Rectangle::setLength (double l)
{
    //Input validation
    if (l > 0 && l < 20)
    {
        length = l;
    }
    else
    {
        throw exceptionLength();
    }
}

void Rectangle::setWidth (double w)
{
    //Input valdidation
    if (w > 0 && w < 20)
    {
        width = w;
    }
    else
    {
        throw exceptionWidth();
    }
}

double Rectangle::getLength()
{
    return length;
}

double Rectangle::getWidth()
{
    return width;
}

void Rectangle::output()
{
    //calculate perimeter
    double perimeter = 2 * length + 2 * width;
    
    //calculate area
    double area = length * width;
    
    //output
    cout << "length = " << getLength() << "; " << "width = " << getWidth() << "; "
    << "perimeter = " << perimeter << "; " << "Area = " << area << endl;
}


int main ()
{
    //Formatting for decimanls
    cout << fixed << setprecision(1);
    
    //create rectangle object
    Rectangle myRectangle;
    
    bool flag = true;
    
    cout << "1. ";
    
    //no value input
    myRectangle.output();
    
    cout << "2. ";
    flag = true;
    try
    {
        //Passes value for length
        myRectangle.setLength(5.0);
    }
    catch (Rectangle::exceptionLength)
    {
        cout << "Exception: length must be > 0 and < 20\n";
        flag = false;
    }
    try
    {
        //Passes value for width
        myRectangle.setWidth(4.0);
        if (flag == true)
        {
            //call output function
            myRectangle.output();
        }
    }
    catch (Rectangle::exceptionWidth)
    {
        cout << "Exception: width must be > 0 and < 20" << endl;
    }
    
    cout << "3. ";
    flag = true;
    try
    {
        //length is greater than it should be
        myRectangle.setLength(25.0);
    }
    catch (Rectangle::exceptionLength)
    {
        //Display error message
        cout << "Exception: length must be > 0 and < 20" << endl;
        flag = false;
    }
    try
    {
        //width is greather than it should be
        myRectangle.setWidth(50.0);
        if (flag == true)
        {
            //Function call
            myRectangle.output();
        }
    }
    catch (Rectangle::exceptionWidth)
    {
        //Display error message
        cout << "Exception: width must be > 0 and < 20" << endl;
    }
    
    return 0;
}
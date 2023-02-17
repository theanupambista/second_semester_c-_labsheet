#include <iostream>

using namespace std;

class Shape
{
public:
    virtual double area() = 0; // Declare pure virtual function area()

protected:
    double width, height;
};

class Triangle : public Shape
{
public:
    Triangle(double w, double h)
    {
        width = w;
        height = h;
    }

    double area()
    {
        return 0.5 * width * height;
    }
};

class Rectangle : public Shape
{
public:
    Rectangle(double w, double h)
    {
        width = w;
        height = h;
    }

    double area()
    {
        return width * height;
    }
};

int main()
{
    // Create a triangle object with width 5 and height 10
    Triangle triangle(5, 10);

    // Calculate the area of the triangle
    double triangleArea = triangle.area();

    // Create a rectangle object with width 6 and height 8
    Rectangle rectangle(6, 8);

    // Calculate the area of the rectangle
    double rectangleArea = rectangle.area();

    // Print the areas of the shapes to the console
    cout << "The area of the triangle is " << triangleArea << endl;
    cout << "The area of the rectangle is " << rectangleArea << endl;

    return 0;
}

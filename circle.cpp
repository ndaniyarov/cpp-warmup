#include "circle.h"
using namespace std;

//default ctor
Circle::Circle()
{
    radius = 0.0;
}
//ctor taking a radius as argument
Circle::Circle(float r)
{
    radius = r;
}
//copy constructor
Circle::Circle(const Circle& circle)
{
    radius = circle.radius;
}
//assignnment operator
Circle& Circle::operator=(const Circle& circle)
{
    radius = circle.radius;
    return *this;
}
//output stream operator
std::ostream& operator<<(std::ostream& os, const Circle& c)
{
   os << c.radius;
   return os;
}
//add operator
Circle Circle::operator+(const Circle& c)
{
    return Circle(this->radius + c.radius);
}
//accessor
float Circle::getRadius()
{
    return radius;
}
//mutator
void Circle::setRadius(float r){
    radius = r;
}
//area
float Circle::computeArea()
{
    float area = M_PI * radius *radius;
    return area;
}
//deconstructor
Circle::~Circle()
{}


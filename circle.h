// Name: Nigina Daniyarova
// Date:2/22/2021

#pragma once
#include <iostream>
class Circle
{
private:
    float radius;
public:
    Circle(); //default
    Circle(float r);
    Circle(const Circle& circle); //copy
    virtual float getRadius(); //accessor
    virtual void setRadius(float r);//setter
    Circle operator+(const Circle& c);
    Circle& operator=(const Circle& circle);//assignment operator
    friend std::ostream& operator<<(std::ostream& os, const Circle& c);//output stream operator
    virtual float computeArea();//area
    ~Circle(); //destructor;
};


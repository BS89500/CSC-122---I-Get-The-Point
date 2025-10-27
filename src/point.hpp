#pragma once
#include <string>
#include <iostream>
class Point{
    private:
    float x;
    float y;
    public:
    Point(float x, float y);
    float operator-(Point other);
    bool operator==(Point other);
    bool operator!=(Point other);
    Point operator/(Point other);
    float operator[](char axis);
    friend std::ostream& operator<<(std::ostream &stream, const Point &other);
};



std::string hello();

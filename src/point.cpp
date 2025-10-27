#include <string>
#include "point.hpp"
#include <cmath>
#include <math.h>

Point::Point(float x, float y) {
   this->x = x;
   this->y = y;
}
float Point::operator-(Point other) {
   float xdiff = x - other.x;
   float ydiff = y - other.y;
   return sqrt(xdiff * xdiff + ydiff * ydiff);
}

bool Point::operator==(Point other) {
   if (x == other.x && y == other.y) {
      return true;
   }
   return false;
}
bool Point::operator!=(Point other) {
   if (x != other.x || y == other.y) {
      return true;
   }
   return false;
}
Point Point::operator/(Point other) {
   float xsum = x + other.x;
   float ysum = y + other.y;
   return Point(xsum/2, ysum/2);
}
std::ostream& operator<<(std::ostream &os, const Point &other) {
   return os << "(" << other.x << ", " << other.y << ")" << std::endl;
}
std::string hello() {
   return "Hello World!";
}

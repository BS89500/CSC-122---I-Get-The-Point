#include <iostream>

#include "src/point.hpp"
using namespace std;
int main() {
  std::cout << hello() << std::endl;
  Point p1 = Point(3.2, 9.8);
  Point p2 = Point(5.5, -1.2);
  cout << (p1 - p2) << endl; // Prints out 11.238
  cout << (p1 == p2) << endl; // Prints out 0 (false)
  cout << (p1 != p2) << endl; // Prints out 1 (true)
  cout << (p1 / p2) << endl; // Prints out a nicely formatted point such as (4.35, 4.3)
  cout << p1['x'] << endl; // Prints out 3.2
  cout << p1['y'] << endl; // Prints out 9.8
}

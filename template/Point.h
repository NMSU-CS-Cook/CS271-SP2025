
#include <iostream>
#include <cmath>

template <typename T> class Point {
 public:
   Point() : x(0), y(0)
   {}
   Point(T x, T y) : x(x), y(y)
   {}
   void move(T dx, T dy) {
      x += dx; y += dy;
   }
   bool isNear(Point<T>& other, T distance) {
      if (abs(x-other.x) <= distance && 
          abs(y-other.y) <= distance)
         return true;
   }
   friend std::ostream& operator<<(std::ostream& os,
                        const Point<T>& point) {
      os << "Point (" << point.x << "," 
         << point.y << ")";
      return os;
   }
 private:
   T x;
   T y;
};


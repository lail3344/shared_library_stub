//#include "polygon.hpp"
#include "triangle.hpp"
#include <cmath>
#include "second.hpp"

#if 0
// the class factories
extern "C" triangle* create() {
    return new triangle;
}

extern "C" void destroy(triangle* p) {
    delete p;
}
#endif

double triangle::area() const {
//        return side_length_ * side_length_ * sqrt(3) / 2;
//    return side_length_ * 10;
      secondClass* second = new secondClass();

      second->testSecondClass();
      return side_length_;
}
void triangle::set_side_length(double side_length) {
        side_length_ = side_length;
}



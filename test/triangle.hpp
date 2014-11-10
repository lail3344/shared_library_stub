#include <cmath>

class triangle {
protected:
    double side_length_;
public:
    triangle():side_length_(0){}
    ~triangle(){}
//    double area() const {
//        return side_length_ * side_length_ * sqrt(3) / 2;
//    }
//    void set_side_length(double side_length) {
//        side_length_ = side_length;
//    }
//
    double area() const;
    void set_side_length(double side_length);
};

// the types of the class factories
//typedef triangle* create_t();
//typedef void destroy_t(triangle *);

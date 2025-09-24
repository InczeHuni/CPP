//
// Created by User on 2025. 09. 24..
//

#include "Point.h"


Point::Point(int x, int y) {
    if (x >= 0 && x <= 2000 && y >= 0 && y <= 2000) {
        this->x = x;
        this->y = y;
    }
    else {
        this->x = 0;
         this->y = 0;
 }
}
int Point::getX() const {
 return x;
}
int Point::getY() const {
 return y;
}

void Point::print() const {
    std::cout << "p1( " << x << "," << y << ")" << endl;
}
//
// double Point:: distance(const Point& a, const Point& b) {
//     return sqrt((a.getX()-b.getX())*((a.getX()-b.getX()))+((a.getY()-b.getY())*(a.getY()-b.getY())));
// }

double distance(const Point& a, const Point& b) {
    double dx = a.getX() - b.getX();
    double dy = a.getY() - b.getY();
    return sqrt(dx * dx + dy * dy);
}

bool isSquare(const Point& a, const Point& b, const Point& c, const Point&d) {
    set<double>tav;
    tav.insert(distance(a,b));
    tav.insert(distance(a,c));
    tav.insert(distance(b,c));
    tav.insert(distance(c,d));
    tav.insert(distance(a,d));
    tav.insert(distance(b,d));
    if (tav.size()==2) {
        return true;
    }
    else {
        return false;
    }
}


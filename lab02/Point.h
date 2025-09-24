//
// Created by User on 2025. 09. 24..
//

#ifndef POINT_H
#define POINT_H
#include <iostream>
#include <cmath>
#include <set>
using namespace std;

class Point{
private:
    int x, y;
public:
    Point( int x=0, int y=0);
    int getX() const;
    int getY() const;
    void print() const;

};


double distance(const Point& a, const Point& b);
bool isSquare(const Point& a, const Point& b, const Point& c, const Point&d);



#endif //POINT_H

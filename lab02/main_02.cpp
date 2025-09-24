#include <fstream>
#include <iostream>
#include "Point.h"
using namespace std;

int main(int argc, char **argv) {
    Point p1(2, 3);
    cout << "p1( " << p1.getX() << "," << p1.getY() << ")" << endl;
    Point p2(100, 200);
    cout << "p2( " << p2.getX() << "," << p2.getY() << ")" << endl;
    Point *pp1 = new Point(300, 400);
    Point *pp2 = new Point(500, 1000);
    cout << "pp1( " << pp1->getX() << "," << pp1->getY() << ")" << endl;
    cout << "pp2( " << pp2->getX() << "," << pp2->getY() << ")" << endl;
    p1.print();
    p2.print();
    cout<<distance(p1,p2)<<endl;
    cout<<isSquare((0,0),(0,2),(2,2),(2,0))<<endl;
    /*ifstream ifs("input.txt");
    if (!ifs) {
        cout<<"File not found"<<endl;
        exit(1);
    }
    int x,y;
    Point points[4];
    int index=0;
    while (ifs>>x>>y) {
        points[index]=Point(x,y);
        ++index;
    }
    cout<<points[0].getX()<<","<<points[0].getY();*/
    delete pp1;
    delete pp2;
    return 0;
}

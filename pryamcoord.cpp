

#include "pryamcoord.h"
#include <iostream>
#include <cmath>
using namespace std;

double pryam::getX() const {
    return x;
}

void pryam::setX(double x) {
    pryam::x = x;
}

double pryam::getY() const {
    return y;
}

void pryam::setY(double y) {
    pryam::y = y;
}

double pryam::getZ() const {
    return z;
}

void pryam::setZ(double z) {
    pryam::z = z;
}

pryam::pryam(double x, double y, double z): x(x), y(y), z(z){
    pryam:: x = x>0 ? pryam::x=x: pryam::x=-x;
    pryam:: y = y>0 ? pryam::y=y: pryam::y=-y;
    pryam:: z = z>0 ? pryam::z=z: pryam::z=-z;
}

void pryam::getpryamcoord() {
    cout << x << y << z <<endl;
}



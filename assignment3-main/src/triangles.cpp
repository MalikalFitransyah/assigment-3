#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>

#include "include/triangles.hpp"

namespace geo {

// Toleransi floating-point
static const float EPS = 1e-4f;

Triangle::Triangle() : _t1(), _t2(), _t3() { }

Triangle::Triangle(Point2D t1, Point2D t2, Point2D t3)
    : _t1(t1), _t2(t2), _t3(t3) { }

void Triangle::SetT1(Point2D t1) { _t1 = t1; }
void Triangle::SetT2(Point2D t2) { _t2 = t2; }
void Triangle::SetT3(Point2D t3) { _t3 = t3; }

float Triangle::SideA() const { return _t1.distanceTo(_t2); }
float Triangle::SideB() const { return _t2.distanceTo(_t3); }
float Triangle::SideC() const { return _t3.distanceTo(_t1); }

bool Triangle::IsEquilateral() const {
    float a = SideA(), b = SideB(), c = SideC();
    return std::fabs(a - b) < EPS && std::fabs(b - c) < EPS;
}

bool Triangle::IsIsosceles() const {
    if (IsEquilateral()) return false;
    float a = SideA(), b = SideB(), c = SideC();
    return std::fabs(a - b) < EPS ||
           std::fabs(b - c) < EPS ||
           std::fabs(c - a) < EPS;
}

bool Triangle::IsRight() const {
    float sides[3] = { SideA(), SideB(), SideC() };
    std::sort(sides, sides + 3);
    // a^2 + b^2 == c^2  (sisi terpanjang sebagai hipotenusa)
    float a2 = sides[0]*sides[0];
    float b2 = sides[1]*sides[1];
    float c2 = sides[2]*sides[2];
    return std::fabs(a2 + b2 - c2) < EPS * 100;
}

void Triangle::TriangleType() const {
    if (IsEquilateral()) {
        std::cout << "sama sisi" << std::endl;
    } else if (IsIsosceles()) {
        std::cout << "sama kaki" << std::endl;
    } else if (IsRight()) {
        std::cout << "siku-siku" << std::endl;
    } else {
        std::cout << "sembarang" << std::endl;
    }
}

}

#include <iostream>
#include <string>
#include <vector>
#include <math.h>

#include "include/point2d.hpp"
#include "include/triangle.hpp"

using namespace std;
using namespace geo;

int main(int argc, char ** argv)
{
    vector<Triangle> triangles;

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        float x1, y1, z1;
        float x2, y2, z2;
        float x3, y3, z3;

        cin >> x1 >> y1 >> z1;
        cin >> x2 >> y2 >> z2;
        cin >> x3 >> y3 >> z3;

        Point2D t1(x1, y1, z1);
        Point2D t2(x2, y2, z2);
        Point2D t3(x3, y3, z3);

        triangles.push_back(Triangle(t1, t2, t3));
    }
    
    for (int i = 0; i < (int)triangles.size(); i++) {
        triangles[i].TriangleType();
    }
   
    return 0;
}

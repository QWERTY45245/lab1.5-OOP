#include "RightAngled.h"
#include <cmath>
#include <Windows.h>
using namespace std;
RightAngled::RightAngled() {
    area = 0.0;
}

void RightAngled::Init(const Triangle& tri) {
    triangle = tri;
}

void RightAngled::CalculateArea() {
    double a = triangle.GetSide1();
    double b = triangle.GetSide2();
    double c = triangle.GetSide3();

    double s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
}
double RightAngled::GetArea() const {
    return area;
}
void RightAngled::Display() const {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    cout << "Площа прямокутного трикутника: " << area << endl;
}

#pragma once
#include <iostream>

class Triangle {
private:
    double side1, side2, side3;

public:
    Triangle();
    void Init(double s1, double s2, double s3);
    void Read();
    void Display();
    double GetSide1() const;
    double GetSide2() const;
    double GetSide3() const;
    void SetSide1(double s);
    void SetSide2(double s);
    void SetSide3(double s);
    double Perimeter() const;
    double AngleA() const;
    double AngleB() const;
    double AngleC() const;
    std::string toString() const;
};

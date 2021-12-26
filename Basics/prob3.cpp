#include <iostream>
#include <math.h>
using namespace std;
float calculateArea(float sideA, float sideB, float sideC, float side);
int main()//
{
    float sideA, sideB, sideC,side;
    cout << "\t\tEnter the sides of Triangle" << endl;
    cout << "Enter Side A:";
    cin >> sideA;
    cout << "Enter Side B:";
    cin >> sideB;
    cout << "Enter Side C:";
    cin >> sideC;
    side = (sideA + sideB + sideC) / 2.0;
    float Area = calculateArea(sideA, sideB, sideC, side);
    cout << "The Area of Triangle is " << Area;
}
// Triangle Area Calculator Funtion
float calculateArea(float sideA, float sideB, float sideC, float side)
{
    float Area = sqrt(side * (side - sideA) * (side - sideB) * (side - sideC));
    return Area;
}
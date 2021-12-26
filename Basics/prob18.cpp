#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[])
{
    float radius, angle, sectorArea;
    cout << "Enter the Sector radius of Circle: ";
    cin >> radius;
    cout << "Enter the Angle in Radians between the radii: ";
    cin >> angle;
    sectorArea = (angle /2.0 )* pow(radius, 2);
    cout << "The sector Area of circle is " <<sectorArea<<"m";
    return 0;
}

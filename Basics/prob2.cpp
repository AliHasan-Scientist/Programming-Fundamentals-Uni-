#include <iostream>
#include <iomanip>
#include <math.h>
float Pie = 3.141592;//Define Globaly
using namespace std;
int main()
{
    float radius;
    double surfaceArea, Volume;
    cout << "Enter the Radius of Sphere->";
    cin >> radius;
    surfaceArea = 4 * Pie * pow(radius, 2);
    cout << "The surface area of Sphere is " << surfaceArea << endl;
    Volume = 4 / 3.0 * Pie * pow(radius, 3);
    cout << "The volume of Sphere is " << Volume << endl;
}
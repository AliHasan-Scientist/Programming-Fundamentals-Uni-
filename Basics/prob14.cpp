#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[])
{
    float x1, y1, x2, y2;
    cout << "\t\tEnter the required Qoordinates" << endl;
    cout << "Enter x1 coordinate of line: ";
    cin >> x1;
    cout << "Enter y1 coordinate of line: ";
    cin >> y1;
    cout << "Enter x2 coordinate of line: ";
    cin >> x2;
    cout << "Enter y2 coordinate of line: ";
    cin >> y2;
    float Distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    cout << "The Distance between two points is " << Distance;
    return 0;
}

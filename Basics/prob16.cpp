#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float radius, angle, arcLength;
    cout << "Enter the radius of Convex lens: ";
    cin >> radius;
    cout << "Enter the angle that made by arc Length: ";
    cin >> angle;
    arcLength = radius * angle;
    cout << "The arc length of Conver lens is " << arcLength;
    return 0;
}

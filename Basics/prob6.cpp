#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int cube, square, number;
    cout << "Enter a number:";
    cin >> number;
    square = pow(number, 2);
    cube = pow(number, 3);
    cout << "The square of " << number << "is " << square<<endl;
    cout << "The cube of " << number << "is " << cube;
    return -1;
}

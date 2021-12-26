#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float miles, kilometers;
    cout << "Enter Distance in Miles:";
    cin>>miles;
    kilometers = miles * 1.609;
    cout << "Distance in Kilometers is " << kilometers << "km";
    return 0;
}

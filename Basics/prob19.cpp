#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[])
{
    float inputNumber;
    cout << "Enter a number to Calculate the log with base 2: ";
    cin >> inputNumber;
    float log;
    if (inputNumber >= 1.0)
    {
        log = log2(inputNumber);
        cout << "The log of " << inputNumber << " with base 2 is " << log;
    }
    else
        cout << "Please Enter Positive number";
    return 0;
}

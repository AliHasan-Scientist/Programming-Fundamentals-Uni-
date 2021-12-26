#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[])
{
    float basicPay, grossPay;
    cout << "Enter your Basic Salary: ";
    cin >> basicPay;
    float dAllownce = 35 / 100.0 * basicPay;
    float hRent = 25 / 100.0 * basicPay;
    grossPay = basicPay + dAllownce + hRent;
    cout << "Your Gross Pay is " << grossPay;
}

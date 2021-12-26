#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[])
{
    float finalAmount, pAmount, interestRate, timePeriod;
    cout << "Enter the Principle Amount: ";
    cin >> pAmount;
    cout << "Enter the Rate of interest of Amount:";
    cin >> interestRate;
    cout << "Enter the Total Time(in Years) : ";
    cin >> timePeriod;
    finalAmount = pAmount * pow((1 + interestRate / 100.0), timePeriod);
    cout << "The Total Compound inetrest is :" << finalAmount;
}

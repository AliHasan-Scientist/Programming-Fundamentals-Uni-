#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int number;
    cout << "Enter 3-digit number:";
    cin >> number;
    int digit1 = number / 100;
    number = number % 100;
    int digit2 = number / 10;
     int digit3 = number % 10;
    cout << digit1 << endl << digit2 << endl << digit3 << endl;
}

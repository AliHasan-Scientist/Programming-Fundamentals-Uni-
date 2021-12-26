#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[])
{
    char inputChracter;
    cout << "Enter a chracter :";
    cin >> inputChracter;
    cout << " Next chracters is " << char(inputChracter + 1) << "," << char(inputChracter + 2);
}

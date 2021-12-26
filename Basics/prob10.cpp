#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float Temp_in_Fahrenheit, Temp_in_Celsius;

    cout << "Enter the Temprature in Fahrenheit:";
    cin >> Temp_in_Fahrenheit;
    Temp_in_Celsius = ((5 / 9.0) * (Temp_in_Fahrenheit - 32.0));
    cout << "Temprate in Celsius is " << Temp_in_Celsius << " Degree Celsius";
    return 0;
}

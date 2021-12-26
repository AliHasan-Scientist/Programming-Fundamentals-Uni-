#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float inputPetrol, distanceCover;
    float inOneLiter = 5.3; //can travel 5.3 miles in one liter
    cout << "Enter the petrol in Liters->";
    cin >> inputPetrol;
    if (inputPetrol >= 1.0)
    {
        distanceCover = inputPetrol * inOneLiter;
        cout << "You can traverl the" << distanceCover << "miles distance in" << inputPetrol << "liter Petrol";
    }
    else
        cout << "Plz Enter the Petrol one litter or Greater";

    return 0;
}

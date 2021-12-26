#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[])
{
    float digits[5], sum = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter number " << i + 1 << ":";
        cin >> digits[i];
        sum = sum + digits[i];
    }
    cout << "The Total Sum is " << sum;
}

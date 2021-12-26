#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a, b, c, temp;
    cout << "Enter a ";
    cin >> a;
    cout << "Enter b ";
    cin >> b;
    cout << "Enter c ";
    cin >> c;
    temp = a;//
    a = b;
    b = c;
    c = temp;
    cout << " a=" << a;
    cout << " b=" << b;
    cout << " c=" << c;
     return 0;
}

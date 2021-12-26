#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char inputCharacter;
    cout << "Enter any Character From keyboard :";
    cin >> inputCharacter;
    cout << "The ASCII code of \'" << inputCharacter << "\'is " << int(inputCharacter);
    return 0;
}

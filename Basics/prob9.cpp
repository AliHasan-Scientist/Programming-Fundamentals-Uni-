#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int totalStudents, fee_perStudent;
    cout << "Enter the Total number of Student in the Class:";
    cin >> totalStudents;
    cout << "Enter the Fee per Student:";
    cin>>fee_perStudent;
   int collectedFee = totalStudents * fee_perStudent;
    cout << "Total fee Collected is " << collectedFee << "Rs.";
    return 0;
}

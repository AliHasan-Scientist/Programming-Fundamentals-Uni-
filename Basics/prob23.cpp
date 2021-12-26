#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int hour1, minute1, sec1;
    int hour2, minute2, sec2;
    cout << "Enter the 1st Time in folowing format hh:mm:ss" << endl;
    cout << "hh:";
    cin >> hour1;
    cout << "mm:";
    cin >> minute1;
    cout << "ss:";
    cin >> sec1;
    cout << "Enter the 2nd Time in folowing format hh:mm:ss" << endl;
    cout << "hh:";
    cin >> hour2;
    cout << "mm:";
    cin >> minute2;
    cout << "ss:";
    cin >> sec2;
    int totalHour = hour1 + hour2;
    int totalMin = minute1 + minute2;
    int totalSec = sec1 + sec2;
    cout << "The Total time is " << totalHour << ":" << totalMin << ":" << totalSec;
}

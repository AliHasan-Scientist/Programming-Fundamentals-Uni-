#include <iostream>
using namespace std;
#include <string>
int main(int argc, char const *argv[])
{
    string subject[5] = {"Physics", "Math", "Computer", "English", "Urdu"};
    int marks[5];
    int totalMarks = 0;
   float percentage;
    cout << "\t\tEnter your Marks of five subjects" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the marks of " << subject[i] << " :";
        cin >> marks[i];
        totalMarks = totalMarks + marks[i];
       percentage=totalMarks/5.0;
    }
    cout << "You Total marks is " << totalMarks<<" out of 500"<<endl;
    cout<<"And Percentage is "<<percentage<<"%";
    return 0;
}

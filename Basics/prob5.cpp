#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    unsigned int age;
    unsigned int age_in_Days,age_in_Months;
    cout<<"Enter your Age in years:";
    cin>>age;
age_in_Days=age*365;
age_in_Months=age*12;
cout<<"Your Age in Days is("<<age_in_Days<<" days)"<<endl;
cout<<"Your Age in Months is("<<age_in_Months<<" monts)"<<endl;

    return 0;
}

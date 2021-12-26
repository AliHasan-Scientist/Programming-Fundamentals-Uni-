#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float inPounds,inKilograms;
    cout<<"Enter the Weight in pounds :";
    cin>>inPounds;
    inKilograms=inPounds/2.2046;
    cout<<"The weight "<<inPounds<<" pounds in kilograms is"<<inKilograms<<"kg.";
    return 0;
}

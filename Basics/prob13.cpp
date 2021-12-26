#include <iostream>
using namespace std;
float Volume(float l, float w, float h); //funtion Prototype

int main(int argc, char const *argv[])
{
    float length, width, height;
    cout << "\t\tEnter the Dimensions of Cube" << endl;
    cout << "Enter Lenght of cube:";
    cin >> length;
    cout << "Enter Width of cube:";
    cin >> width;
    cout << "Enter Height of cube:";
    cin >> height;
    float v = Volume(length, width, height);//Function invoke
    cout << "The Volume of Cube is " << v << " cubic meter." << endl;
    return -1;
}
float Volume(float l, float w, float h)
{
    float Volume = (l * w * h);
    return Volume;
}
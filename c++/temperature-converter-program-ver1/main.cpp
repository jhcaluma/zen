#include <iostream>
using namespace std;

int main() {
    float tempC, tempF;

    cout<<"\nEnter temp in C: ";
    cin>>tempC;

    tempF = (tempC * (9.0f / 5.0f)) + 32.0f;

    cout<<"\nTemp in F: "<<tempF;
}
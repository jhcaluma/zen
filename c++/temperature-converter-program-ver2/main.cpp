#include <iostream>
using namespace std;

foat celsiusToFahrenheit(float celsius);

int main() {
    float tempC, tempF;

    cout<<"\nEnter temp in C: ";
    cin>>tempC;

    tempF = celsiusToFahrenheit(tempC);

    cout<<"\nTemp in F: "<<tempF;
}

float celsiusToFahrenheit(float celsius) {
    return (celsius * (9.0f / 5.0f)) + 32.0f;
}
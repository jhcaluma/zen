#include <iostream>
#include "functions.h"
using namespace std;

int main() {
	float tempC, tempF;
	
	cout<<"\nEnter temp C: ";
	cin>>tempC;
	
	tempF = celToFahren(tempC);
	
	cout<<"\nTemp in F: "<<tempF;
}
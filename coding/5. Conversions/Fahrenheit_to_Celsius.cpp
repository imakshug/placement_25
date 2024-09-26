//Fahrenheit to Celsius Conversion
#include <iostream>
using namespace std;

float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

// Usage
int main() {
    float fahrenheit = 98.6;
    cout << fahrenheit << " degrees Fahrenheit is " << fahrenheitToCelsius(fahrenheit) << " degrees Celsius." << endl;
    return 0;
}

//The Fahrenheit to Celsius Conversion function converts temperature from Fahrenheit to Celsius using the standard formula. 

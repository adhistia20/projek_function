#include <iostream>
using namespace std;

float celciusToFahrenheit(float celcius) {
    return (celcius * 9 / 5) + 32;
}

float fahrenheitToCelcius(float fahrenheit){
    return (fahrenheit - 32) * 5 / 9;
}

int main (){
    

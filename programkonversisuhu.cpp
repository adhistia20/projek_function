#include <iostream>
using namespace std;

float celciusToFahrenheit(float celcius) {
    return (celcius * 9 / 5) + 32;
}

float fahrenheitToCelcius(float fahrenheit){
    return (fahrenheit - 32) * 5 / 9;
}

int main (){
    float suhu;
    char pilihan;

    cout << "Pilih konversi suhu:\n";
    cout << "1. Celcius ke Fahrenheit (C)\n";
    cin >> pilihan;

    if (pilihan == 'C' || pilihan == 'c') {
        cout << "Masukkan suhu dalam Celcius: ";
        cin >> suhu;
        cout << suhu << "°C = " << celciusToFahrenheit(suhu) << "°F\n";
    }


    return 0;
}

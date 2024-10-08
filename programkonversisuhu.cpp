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
    cout << "2. Fahrenheit ke Celcius (F)\n";
    cout << "Masukkan pilihan (C/F): ";
    cin >> pilihan;

    if (pilihan == 'C' || pilihan == 'c') {
        cout << "Masukkan suhu dalam Celcius: ";
        cin >> suhu;
        cout << suhu << "°C = " << celciusToFahrenheit(suhu) << "°F\n";
    }esle if (pilihan == 'F' || pilihan == 'f') {
        cout << "Masukkan suhu dalam Fahrenheit: ";
        cin >> suhu;
        cout << suhu << "°C = " << fahrenheitToCelcius(suhu) << "°C\n";
    }else{
        cout << "Pilihan tidak valid.\n";
    }
    return 0;
}

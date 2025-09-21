
#include <iostream>
using namespace std;

int main() {
    double temp;
    char choice;
    cout << "Enter temperature: ";
    cin >> temp;
    cout << "Convert (C for Celsius, F for Fahrenheit): ";
    cin >> choice;

    if(choice == 'C' || choice == 'c') {
        cout << "Fahrenheit: " << (temp * 9/5) + 32;
    } else if(choice == 'F' || choice == 'f') {
        cout << "Celsius: " << (temp - 32) * 5/9;
    } else {
        cout << "Invalid choice!";
    }

    return 0;
}


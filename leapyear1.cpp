#include <iostream>
using namespace std;

int main() {
    int month, year, days;

    cout << "Enter month (1-12): ";  // 2
    cin >> month;

    cout << "Enter year: ";  //2025
    cin >> year;

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
            
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
            
        case 2:
            
            if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
                days = 29;
            else
                days = 28;
            break;
            
        default:
            cout << "Invalid month entered!" << endl;
            return 1;
    }

    cout << "Number of days in month " << month << " of year " << year << " is: " << days << endl;
    //   28
return 0;
}


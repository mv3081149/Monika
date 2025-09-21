#include <iostream>
using namespace std;

int main() {
    int startYear, endYear;

    cout << "Enter start year: ";  //2000
    cin >> startYear;

    cout << "Enter end year: ";   //2025
    cin >> endYear;

    cout << "Leap years between " << startYear << " and " << endYear << " are:\n"; 
      //2000 ,2004,2008 ,2012 ,2016, 2020 ,2024

    for (int year = startYear; year <= endYear; year++) {
        
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
            cout << year << " ";
        }
    }
cout<<endl;
return 0;
}
   


#include <iostream>
using namespace std;

int main() {
    int n, fact = 1;
    cout << "Enter number: ";  //5
    cin >> n;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    cout << "Factorial = " << fact; //120
    return 0;
}



#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";   // 34  23
    cin >> a >> b;

    while(a != b) {
        if(a > b) a -= b;
        else b -= a;
    }
    cout << "HCF = " << a;    // 1
    return 0;
}


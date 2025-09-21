#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";   // 10 ,20 ,30,
    cin >> a >> b >> c;

    if((a > b && a < c) || (a < b && a > c))
        cout << "Middle number: " << a;       //20
        
    else if((b > a && b < c) || (b < a && b > c))
        cout << "Middle number: " << b;
        
    else
        cout << "Middle number: " << c;

    return 0;
}

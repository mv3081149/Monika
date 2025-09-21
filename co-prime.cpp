
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";   //  53  3
    cin >> x >> y;

    if(gcd(x, y) == 1) cout << "Co-prime";    // co-prime
    else cout << "Not co-prime";
    return 0;
}


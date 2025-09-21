
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, sum = 0, temp, digits = 0;
    cout << "Enter number: ";   // 34
    cin >> n;
    temp = n;

    int t = n;
    while(t) {
        digits++;
        t /= 10;
    }

    t = n;
    while(t) {
        int r = t % 10;
        sum += pow(r, digits);
        t /= 10;
    }

    if(sum == n) cout << "Armstrong";
    else cout << "Not Armstrong";          // Not Armstrong
    return 0;
}


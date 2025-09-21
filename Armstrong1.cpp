#include <iostream>
#include <cmath>
using namespace std;

int main() {
    for(int n = 1; n < 1000; n++) {
        int sum = 0, digits = 0, t = n;
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
        if(sum == n) cout << n << " ";
    }
    return 0;
}




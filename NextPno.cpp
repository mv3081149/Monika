
#include <iostream>
using namespace std;

bool isPrime(int n) {
    if(n < 2) return false;
    for(int i = 2; i*i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter number: ";   // 13
    cin >> n;

    int next = n + 1;
    while(!isPrime(next)) {
        next++;
    }
    cout << "Next prime = " << next;   // 17
    return 0;
}



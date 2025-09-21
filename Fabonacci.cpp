
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter N: ";   //15
    cin >> n;
    
    int a = 0, b = 1, fib;
    
    if(n == 1) fib = a;
    else if(n == 2) fib = b;
    
    else {
        for(int i = 3; i <= n; i++) {
            fib = a + b;
            a = b;
            b = fib;
        }
    }
    
    cout << n << "th term = " << fib;    //377
    return 0;
}


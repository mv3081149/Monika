#include <iostream>
using namespace std;

int main() {
    int N;
    
    cout << "Enter a positive integer N: ";     10
    cin >> N;

    int sum = 0;

    
    sum = N * (N + 1) / 2;

    cout << "The sum of first " << N << " natural numbers is: " << sum << endl;     //55
    return 0;
}

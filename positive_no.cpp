#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a positive integer N: ";   //6
    cin >> N;

    // Using formula: Sum of first N even numbers = N*(N+1)
    int sum = N * (N + 1);

    cout << "The sum of first " << N << " even natural numbers is: " << sum << endl;   //42
return 0;
}

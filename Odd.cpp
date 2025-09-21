#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a positive integer N: ";    //  5
    cin >> N;

    // Using formula: Sum of first N odd numbers = N*N
    int sum = N * N;

    cout << "The sum of first " << N << " odd natural numbers is: " << sum << endl;   //25
    return 0;
}

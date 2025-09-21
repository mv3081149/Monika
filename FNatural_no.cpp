#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a positive integer N: ";   // 5
    cin >> N;

    
    int sum = N * (N + 1) * (2 * N + 1) / 6;

    cout << "The sum of squares of first " << N << " natural numbers is: " << sum << endl;  //55
return 0;
}

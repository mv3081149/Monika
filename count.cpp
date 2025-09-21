
#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cout << "Enter number: "; // 30
    cin >> n;
    
    int temp = n;
    if(temp == 0) count = 1;
    
    while(temp != 0) {
        count++;
        temp /= 10;
    }
    
    cout << "Digits = " << count;  // 2
    return 0;
}


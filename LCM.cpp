
#include <iostream>
using namespace std;

int main() {
    int a, b, lcm;
    cout << "Enter two numbers: ";  //20  24
    cin >> a >> b;
    
    int maxVal = (a > b) ? a : b;
    
    for(int i = maxVal; ; i++) {
        if(i % a == 0 && i % b == 0) {
            lcm = i;
            break;
        }
    }
    
    cout << "LCM = " << lcm;  //120
    return 0;
}



#include <iostream>
using namespace std;

int main() {
    int n=5;
    for(int i=0; i<=n; i++) {
        for(char ch='A'; ch<='A'+i+1; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}



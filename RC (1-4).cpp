#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows: ";  //4
    cin >> rows;
    cout << "Enter number of columns: ";  // 4
    cin >> cols;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            cout << i;                        /* 1111
                                                 2222
                                                 3333
                                                 4444*/
        }        
        cout << endl;                    
}
return 0;}

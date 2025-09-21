#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three sides of triangle: ";
    cin >> a >> b >> c;

    if(a + b > c && a + c > b && b + c > a) { // valid triangle
        if(a == b && b == c)
            cout << "Equilateral Triangle";
        else if(a == b || b == c || a == c)
            cout << "Isosceles Triangle";
        else
            cout << "Scalene Triangle";
    } else {
        cout << "Not a valid triangle!";
    }

    return 0;
}

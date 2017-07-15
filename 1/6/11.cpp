#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double x1, x2;
    double d = b * b - (4 * a * c);
    if (d == 0){
        x1 = -b / (2 * a);
        cout << x1;
    } else if (d > 0){
        x1 = (-b - sqrt(d)) / (2 * a);
        x2 =  (-b + sqrt(d)) / (2 * a);
        if (x1 >= x2){
            cout << x2 << " " << x1;
        } else {
            cout << x1 << " " << x2;
        }
    }
    return 0;
}
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    double a;
    int i = 0;
    double d,d1;
    cin >> a;
    while (a != 0){
        d += a;
        d1 += a * a;
        i += 1;
        cin >> a;
    }
    cout << setprecision(12);
    double s = sqrt((d1 - 2 * d * (d / i) + i * (d / i) * (d / i)) / (i - 1));
    cout << s;
    return 0;
}
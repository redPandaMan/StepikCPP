#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    double a,b,c;
    cin >> a >> b >> c;
    cout << fixed;
    double d = b * 100 + c;
    d = d * 1 +  d * a / 100;
    int i = (int) d;
    int i1 = (int) d / 100, i2 = (int) d % 100;
    cout << i1 << " " << i2;
    return 0;
}
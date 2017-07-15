#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    double a,b,c,e;
    cin >> a >> b >> c >> e;
    cout << fixed;
    double d = b * 100 + c;
    while (e > 0){
        e -= 1;
        d = d * 1 +  d * a / 100;
        d = trunc(d);
    }
    int i1 = (int) d / 100, i2 = (int) d % 100;
    cout << i1 << " " << i2;
    return 0;
}
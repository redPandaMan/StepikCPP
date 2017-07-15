#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    double a;
    cin >> a;
    cout << setprecision(3) << fixed;
    cout << a -  trunc(a);
    return 0;
}
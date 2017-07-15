#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    double x;
    cin >> x;
    double p;
    double k;
    if (n > 0) {
        cin >> k;
        p = k * x;
        n--;
    }
    while (n > 0) {
        n--;
        cin >> k;
        p = (p + k) * x;
    }
    cin >> k;
    p = p + k;
    cout << p;
    return 0;
}
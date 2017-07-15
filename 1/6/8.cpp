#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int a, i = 0;
    double d;
    cin >> a;
    while (a != 0){
        d += a;
        i += 1;
        cin >> a;
    }
    cout << fixed;
    cout << d / i;
    return 0;
}
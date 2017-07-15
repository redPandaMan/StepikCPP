#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    a = a % (60 * 60 * 24);
    int d = a / (60 * 60);
    a = a % (60 * 60);
    int d1 = a / 60;
    a = a % 60;
    cout << d << ":";
    if (d1 < 10){cout << 0;};
    cout << d1 << ":";
    if (a < 10){cout << 0;};
    cout << a;
    return 0;
}
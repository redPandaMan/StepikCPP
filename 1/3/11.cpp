#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cin >> a >> b >> c;
    int d = b * c;
    int d2 = a * c + d / 100;
    d = d % 100;
    cout << d2 << " " << d;
    return 0;
}
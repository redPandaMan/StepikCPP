#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    int c;
    c = (a / 1000) + ((a % 1000) / 100) * 10 + ((a % 100) / 10) * 100 + 1000 * (a % 10);
    cout << c - a + 1;
    return 0;
}
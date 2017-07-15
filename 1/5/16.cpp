#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    int m1 = 0, m2 = 0, m3 = a, i = 0, k1 = 0, k2 = 0, n = 1;
    while (a != 0) {
        cin >> a;
        m1 = m2;
        m2 = m3;
        m3 = a;
        n += 1;
        if (m1 != 0 && m3 != 0){
            if (m2 > m1 && m2 > m3) {
                k1 = k2;
                k2 = n;
                if (k1 != 0) {
                    if (k2 - k1 < i || i == 0) {
                        i = k2 - k1;
                    }
                }
            }
        }
    }
    cout << i;
    return 0;
}
#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    int m1 = 0, m2 = 0, m3 = a, i = 0;
    while (a != 0) {
        cin >> a;
        m1 = m2;
        m2 = m3;
        m3 = a;
        if (m1 != 0 && m3 != 0){
            if (m2 > m1 && m2 > m3) {
                i += 1;
            }
        }
    }
    cout << i;
    return 0;
}
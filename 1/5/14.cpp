#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    int m1 = 1, m2 = 1, z = a;
    while (a != 0) {
        cin >> a;
        if (a == z) {
            m2 += 1;
        } else {
            if (m2 > m1){
                m1 = m2;
            }
            m2 = 1;
            z = a;
        }
    }
    cout << m1;
    return 0;
}
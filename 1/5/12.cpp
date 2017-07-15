#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    int m1 = 0, m2 = 1;
    while (a != 0){
        a -= 1;
        int t = m1;
        m1 = m2;
        m2 = m1 + t;
    }
    cout << m1;
    return 0;
}
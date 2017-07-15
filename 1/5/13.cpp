#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    int m1 = 0, m2 = 1, i = 0;
    while (a > m1){
        int t = m1;
        m1 = m2;
        m2 = m1 + t;
        i += 1;
    }
    if (a == m1){
        cout << i;
    } else{
        cout << -1;
    }
    return 0;
}
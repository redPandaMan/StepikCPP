#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    int m1 = a, m2 = 0;
    while (a != 0){
        cin >> a;
        if (a > m1){
            m2 = m1;
            m1 = a;
        } else if (a > m2){
            m2 = a;
        }
    }
    cout << m2;
    return 0;
}
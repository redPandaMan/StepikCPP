#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    int i = a;
    int k = 0;
    while (a != 0){
        if (a > i){
            i = a;
            k = 0;
        }
        if (a == i) {
            k += 1;
        }
        cin >> a;
    }
    cout << k;
    return 0;
}
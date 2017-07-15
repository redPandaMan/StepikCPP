#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin >> a >> b;
    int c;
    if (a > 0){
        c = a * b;
        while (c >= 109){
            c = c - 109;
        }
    }
    else{
        c = -1 * a * b;
        c = 109 - c;
        while (c < 0) {
            c = 109 + c;
        }
    }
    cout << c;
    return 0;
}
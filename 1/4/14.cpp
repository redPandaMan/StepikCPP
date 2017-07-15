#include <iostream>
using namespace std;
int main() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if (a > b){
        int t = a;
        a = b;
        b = t;
    }
    int e = a - c;
    int e2 = b - d;
    cout << min(min(c, d), min(e, e2));
    return 0;
}
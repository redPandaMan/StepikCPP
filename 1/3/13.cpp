#include <iostream>
using namespace std;
int main() {
    int a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;
    cout << (d - a) * 3600 + (e - b) * 60 + (f - c);
    return 0;
}
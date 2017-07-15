#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    int i = 1;
    while (i < a){
        i *= 2;
    }
    if (a % i == 0){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
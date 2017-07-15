#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    int i = 2;
    while (a % i){
        i += 1;
    }
    cout << i;
    return 0;
}
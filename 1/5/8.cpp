#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    int i = 0;
    while (a != 0){
        i += a;
        cin >> a;
    }
    cout << i;
    return 0;
}
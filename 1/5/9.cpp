#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    int i = a;
    while (a != 0){
        if (a > i){
            i = a;
        }
        cin >> a;
    }
    cout << i;
    return 0;
}
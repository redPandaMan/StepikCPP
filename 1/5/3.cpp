#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    int i = 1;
    while (i*i <= a){
        cout << i*i << " ";
        i += 1;
    }
    return 0;
}
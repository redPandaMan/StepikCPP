#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cin >> a >> b >> c;
    if (c <= a * b){
        if (c % a == 0 || c % b == 0){
            cout << "YES";
        } else{
            cout << "NO";
        }
    } else{
        cout << "NO";
    }
    return 0;
}
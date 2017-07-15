#include <iostream>
using namespace std;
int main() {
    int a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;
    if (a == d && b == e && c == f ||
        a == e && b == d && c == f ||
        a == e && b == f && c == d ||
        a == f && b == e && c == d ||
        a == f && b == d && c == e ||
        a == d && b == f && c == e){
        cout << "Boxes are equal";
    } else if (a >= d && b >= e && c >= f ||
               a >= e && b >= d && c >= f ||
               a >= e && b >= f && c >= d ||
               a >= f && b >= e && c >= d ||
               a >= f && b >= d && c >= e ||
               a >= d && b >= f && c >= e){
        cout << "The first box is larger than the second one";
    } else if (a <= d && b <= e && c <= f ||
               a <= e && b <= d && c <= f ||
               a <= e && b <= f && c <= d ||
               a <= f && b <= e && c <= d ||
               a <= f && b <= d && c <= e ||
               a <= d && b <= f && c <= e){
        cout << "The first box is smaller than the second one";
    } else{
        cout << "Boxes are incomparable";
    }
    return 0;
}
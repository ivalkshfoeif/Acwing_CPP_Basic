#include<bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c;
    int d, e, f;
    cin >> a >> b >> c;
    d = a;
    e = b;
    f = c;
    if (a > b || a > c){
        if (b > c){
            swap(a, c);
        }else {
            swap(a, b);
        }
    }
    if (c < b){
        swap(b, c);
    }

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << endl;
    cout << d << endl;
    cout << e << endl;
    cout << f << endl;

    return 0;
}
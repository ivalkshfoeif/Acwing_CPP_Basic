#include<bits/stdc++.h>

using namespace std;

int main(){

    int x, y;
    cin >> x >> y;
    swap(x, y);
    cout << x << ' ' << y << endl;

    return 0;
}

int swap(int &x, int &y){

    x ^= y;
    y ^= x;
    x ^= y;
}
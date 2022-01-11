#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, m;

    cin >> n >> m;
    cout << max(n, m) << endl;

    return 0;
}

int max(int x, int y){

    if (x > y){
        return x;
    }else {
        return y;
    }
}
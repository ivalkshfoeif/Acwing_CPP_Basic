#include<bits/stdc++.h>

using namespace std;

int m, n;

int helper(int x, int y){
    if (x == n  || y == m ){
        return 1;
    }else {
        return helper(x + 1, y) + helper(x, y + 1);
    }
    
}

int main(){

    cin >> n >> m;

    cout << helper(0, 0) << endl;

    return 0;
}
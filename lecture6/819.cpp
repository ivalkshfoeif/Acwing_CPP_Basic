#include<bits/stdc++.h>

using namespace std;

int helper(int n){
    if (n == 1){
        return 1;
    }
    return n * helper(n - 1);
}

int main(){

    int n;
    cin >> n;
    cout << helper(n) << endl;

    return 0;
}
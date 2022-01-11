#include<bits/stdc++.h>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;

    return 0;
}

int gcd(int a, int b){
    int res = 1;
    for (int i = 0; i < min(a, b); i++){
        if (a % i == 0 && b % i == 0){
            res = i;
        }
    }
    return res;
}
#include<bits/stdc++.h>

using namespace std;

int main(){
    double k;
    string a, b;
    cin >> k >> a >> b;
    int len = a.size();
    int cnt = 0;
    for (int i = 0; i < len; i++){
        if (a[i] == b[i]){
            cnt++;
        }
    }
    if (cnt * 1.0 / len >= k){
        puts("yes");
    }else {
        puts("no");
    }

        return 0;
}
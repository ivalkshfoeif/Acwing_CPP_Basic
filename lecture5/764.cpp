#include<bits/stdc++.h>

using namespace std;


int main(){
    string a;
    getline(cin, a);
    int len = a.size();

    for (int i = 0; i < len; i++){
        cout << char (a[i] + a[(i + 1) % len]);
    }

    return 0;
}
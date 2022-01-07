#include<bits/stdc++.h>

using namespace std;

int main(){

    string s;

    getline(cin, s);

    for (auto &c : s){
        if (c >= 'a' && c <= 'z'){
        c = (c - 'a' + 1) % 26 + 'a';
        }
        if (c >= 'A' && c <= 'Z'){
        c = (c - 'A' + 1) % 26 + 'A';
        }
    }

    cout << s << endl;

    return 0;
}
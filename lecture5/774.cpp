#include<bits/stdc++.h>

using namespace std;

int main(){

    string str, substr;
    while(cin >> str >> substr){
        int maxidx = 0;
        for (int i = 0, len = str.size(); i < len; i++){
            if (str[i] > str[maxidx]){
                maxidx = i;
            }
        }
        str.insert(maxidx + 1, substr);
        cout << str << endl;
    }

    return 0;
}
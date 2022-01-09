#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    while(cin >> s && s != "."){
        int len = s.size();
        for (int i = 1; i <= len; i++){
            if (len % i == 0){
                string temp = s.substr(0, i);
                int m = len / i;
                string r;
                for (int j = 0; j < m; j++){
                    r += temp;
                }

                if (r == s){
                    cout << m << endl;
                    break;
                }
            }
        }
    }

    return 0;
}
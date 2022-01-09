#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;

        int cnt = 0;
        char c;
        int len = str.size();

        for (int i = 0; i < len; i ++ ){
            int j = i;
            while(j < len && str[j] == str[i]){
                j++;
            }
            if (j - i > cnt){
                cnt = j - i;
                c = str[i];
            }
            i = j - 1;
        }

        cout << c << ' ' << cnt << endl;
    }

    return 0;
}
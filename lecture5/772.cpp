#include<bits/stdc++.h>

using namespace std;


int main(){
    char str[100010];
    int freq[26];


    cin >> str;
    

    for (int i = 0, len = strlen(str); i < len; i++){
        freq[str[i] - 'a']++;
    }

    for (int i = 0, len = strlen(str); i < len; i++){
        if (freq[str[i] - 'a'] == 1){
            cout << str[i] << endl;
            return 0;
        }
    }

    puts("no");

    return 0;
}
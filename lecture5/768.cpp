#include<bits/stdc++.h>

using namespace std;

int main(){
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    int len1 = s1.size(), len2 = s2.size(), len = min(len1, len2);

    for (int i = 0; i < len; i++){
        if (s1[i] >= 'A' && s1[i] <= 'Z'){
            s1[i] += 32;
        }
        if (s2[i] >= 'A' && s2[i] <= 'Z'){
            s2[i] += 32;
        }


        if (s1[i] < s2[i]){
            puts("<");
            return 0;
        }if (s1[i] > s2[i]){
            puts(">");
            return 0;
        }
    }

    if (len1 == len2){
        puts("=");
    }else {
        if (len1 > len2){
            puts(">");
        }else {
            puts("<");
        }
    }

        return 0;
}
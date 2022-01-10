#include<iostream>

using namespace std;

int main(){
    string s, s1, s2;
    getline(cin, s, ',');
    getline(cin, s1, ',');
    getline(cin, s2, '\n');
    int slen = s.size();
    int s1len = s1.size();
    int s2len = s2.size();
    int p1 = -1, p2 = -1;
    for (int i = 0; i < slen - s1len; i++){
        if (s.substr(i, s1len) == s1){
            p1 = i;
            break;
        }
    }

    for (int i = 0; i < slen - s2len + 1; i++){
        if (s.substr(i, s2len) == s2){
            p2 = i;
        }
    }
    if (p2 - p1 < s1len || p1 == -1 || p2 == -1){
        cout << -1 << endl;
        return 0;
    }

    cout << p2 - p1 - s1len << endl;

    return 0;
}
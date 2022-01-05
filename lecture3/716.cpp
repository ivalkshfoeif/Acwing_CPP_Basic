#include<bits/stdc++.h>

using namespace std;

int main(){
    int max = -1;
    int index = -1;
    for (int i = 0; i < 100; i++){
        int cur;
        cin >> cur;
        if (cur > max){
            max = cur;
            index = i;
        }
    }
    cout << max << endl;
    cout << index + 1 << endl;

    return 0;
}
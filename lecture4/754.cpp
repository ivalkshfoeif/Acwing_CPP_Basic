#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(cin >> n && n > 0){
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                int p1 = min(j + 1, n - j);
                int p2 = min(i + 1, n - i);
                int temp = min(p1, p2);
                cout << abs(i - j) + 1 << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i+=2){
        int space = (n - i) / 2;
        for (int j = 0; j < space; j++){
            cout << " ";
        }
        for (int j = 0; j < i; j++){
            cout << "*";
        }
        for (int j = 0; j < space; j++){
            cout << " ";
        }
        cout << endl;
    }
    for (int i = n - 2; i >= 1; i-=2){
        int space = (n - i) / 2;
        for (int j = 0; j < space; j++){
            cout << " ";
        }
        for (int j = 0; j < i; j++){
            cout << "*";
        }
        for (int j = 0; j < space; j++){
            cout << " ";
        }
        cout << endl;
    }

        return 0;
}
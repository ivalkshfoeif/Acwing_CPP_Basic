#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, num1 = 0, num2 = 1;
    cin >> n;
    if (n == 1){
        cout << 0 << endl;
        return 0;
    }
    if (n == 2){
        cout << 0 << " " << 1 << endl;
        return 0;
    }
    cout << 0 << " " << 1 << " ";
    for (int i = 0; i < n - 2; i++){
        int temp = num1 + num2;
        cout << temp << " ";
        num1 = num2;
        num2 = temp;
    }

        return 0;
}
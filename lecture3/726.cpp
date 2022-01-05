#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int x;
        bool isPrime = true;
        cin >> x;
        for (int j = 2; j * j <= x; j++){
            if (x % j == 0){
                isPrime = false;
                break;
            }
        }
        if (isPrime){
            cout << x << " is prime" << endl;
        }else {
            cout << x << " is not prime" << endl;
        }
    }

    return 0;
}
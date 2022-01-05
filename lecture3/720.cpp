#include<bits/stdc++.h>

using namespace std;

int main(){

    int a, n;
    cin >> a >> n;
    while(n <= 0){
        cin >> n;
    }
    int sum = 0;
    for (int i = a; i < a + n; i++){
        sum += i;
    }
    cout << sum << endl;

    return 0;
}
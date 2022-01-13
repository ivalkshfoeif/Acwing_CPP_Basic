#include<bits/stdc++.h>

using namespace std;

int get_unique_count(int a[], int n){
    int res = 0;
    for (int i = 0; i < n; i++){
        res++;
        for (int j = 0; j < i; j++){
            if (a[i] == a[j]){
                res--;
                break;
            }
        }
    }

    return res;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    cout << get_unique_count(a, n);

    return 0;
}
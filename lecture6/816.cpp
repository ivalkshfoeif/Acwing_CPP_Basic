#include<bits/stdc++.h>

using namespace std;

void reverse(int a[], int size){

    for (int i = 0; i < size / 2; i++){
        int temp = a[i];
        a[i] = a[size - i - 1];
        a[size - i - 1] = temp;
    }
}

int main(){

    int n, size;
    cin >> n >> size;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    reverse(a, size);
    for (int i = 0; i < n; i++){
        cout << a[i] << ' ';
    }

        return 0;
}
#include<bits/stdc++.h>

using namespace std;

int n, m;

void copy(int a[], int b[], int size){
    for (int i = 0; i < size; i++){
        b[i] = a[i];
        
    }
    for (int i = 0, len = m; i < len; i++){
        cout << b[i] << ' ';
    }
        cout << endl;
}

int main(){
    int size;
    cin >> n >> m >> size;
    int a[n];
    int b[m];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < m; i++){
        cin >> b[i];
    }
    copy(a, b, size);

    return 0;
}
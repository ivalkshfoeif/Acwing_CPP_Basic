#include<bits/stdc++.h>

using namespace std;

int n;

void dfs(int a[], bool visited[], int start){
    if (start >= n){
        for (int i = 0; i < n; i++){
            cout << a[i] << ' ';
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++){
        if (!visited[i]){
            a[start] = i + 1;
            visited[i] = true;
            dfs(a, visited, start + 1);
            visited[i] = false;
        }
    }
}

int main(){
    cin >> n;
    bool visited[n];
    int a[n];
    dfs(a, visited, 0);

    return 0;
}
#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    int min = 1001, index = -1;
    for (int i = 0; i < n; i++){
        if (x[i] < min){
            min = x[i];
            index = i;
        }
    }
    printf("Minimum value: %d\n", min);
    printf("Position: %d", index);

    return 0;
}
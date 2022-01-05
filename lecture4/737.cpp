#include<bits/stdc++.h>

using namespace std;

int main(){
    int a[10];
    for (int i = 0; i < 10; i++){
        int temp;
        cin >> temp;
        if (temp <= 0){
            temp = 1;
        }
        a[i] = temp;
    }

    for (int i = 0; i < 10; i++){
        printf("X[%d] = %d\n", i, a[i]);
    }

        return 0;
}
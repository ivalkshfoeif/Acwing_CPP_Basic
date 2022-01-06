#include<bits/stdc++.h>

using namespace std;

int main(){
    int v, x;
    cin >> v;
    for (int i = 0; i < 10; i++){
        printf("N[%d] = %d\n", i, v);
        v = v * 2;
    }

        return 0;
}
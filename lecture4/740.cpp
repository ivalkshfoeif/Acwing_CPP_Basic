#include<bits/stdc++.h>

using namespace std;

int main(){
    int N[20];
    for (int i = 0; i < 20; i++)
        cin >> N[i];

    for (int i = 19; i >= 0; i--){
        printf("N[%d] = %d\n", 19 - i, N[i]);
    }

        return 0;
}
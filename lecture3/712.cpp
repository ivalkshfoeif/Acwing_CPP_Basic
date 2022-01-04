#include<bits/stdc++.h>

using namespace std;


int main(){
    int n = 6, count = 0;

    while(n--){
        double c;
        cin >> c;
        if (c > 0)
            count++;
    }

    printf("%d positive numbers", count);

    return 0;
}
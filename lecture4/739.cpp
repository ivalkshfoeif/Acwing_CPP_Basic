#include<bits/stdc++.h>

using namespace std;

int main(){
    double a[100];
    for (int i = 0; i < sizeof(a)/sizeof(double); i++){
        cin >> a[i];
    }

    for (int i = 0; i < sizeof(a)/sizeof(double); i++){
        if (a[i] <= 10){
            printf("A[%d] = %.1lf\n", i, a[i]);
        }
    }

    return 0;
}
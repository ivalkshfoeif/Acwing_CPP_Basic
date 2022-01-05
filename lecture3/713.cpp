#include<bits/stdc++.h>

using namespace std;

int main(){
    int count, in = 0, out = 0;
    cin >> count;
    for (int i = 0; i < count; i++){
        int temp;
        cin >> temp;
        if (temp >= 10 && temp <= 20){
            in++;
        }else {
            out++;
        }
    }
    printf("%d in\n", in);
    printf("%d out\n", out);
    return 0;
}
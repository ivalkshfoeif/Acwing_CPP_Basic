#include<bits/stdc++.h>

using namespace std;



int main(){
    int cnt;
    cin >> cnt;
    for (int i = 0; i < cnt; i++){
        int n;
        cin >> n;
        int temp = n;
        for (int i = 1; i * i <= temp; i++){
            if (temp % i == 0){
                if (i < temp) n -= i;
                if (i != temp / i && temp / i < temp) n -= temp / i;
            }
        }
        if (n == 0){
            printf("%d is perfect\n", temp);
        }else {
            printf("%d is not perfect\n", temp);
        }
    }

    return 0;
}
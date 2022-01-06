#include<bits/stdc++.h>

using namespace std;

int main(){
    double sum = 0;
    string c;
    int cnt = 0;
    cin >> c;
    for (int i = 0; i < 12; i++){
        for (int j = 0; j < 12; j++){
            double temp;
            cin >> temp;
            if (j + i < 11 && j - i < 0){
                sum += temp;
                cnt++;
            }
        }
    }
    if ( c == "S"){
        printf("%.1lf\n", sum);
    }else {
        printf("%.1lf\n", sum / cnt);
    }


    return 0;
}
#include<bits/stdc++.h>

using namespace std;

int main(){
    int L;
    string c;
    double M[12][12];
    cin >> L >> c;
    for (int i = 0; i < 12; i++){
        for (int j = 0; j < 12; j++){
            cin >> M[i][j];
        }
    }
    double sum = 0;
    for (int i = 0; i < 12; i++){
        sum += M[L][i];
    }
        
    if (c == "S"){
        printf("%.1lf", sum);
    }else {
        printf("%.1lf", sum / 12.0);
    }

    return 0;
}
#include<bits/stdc++.h>

using namespace std;

int main(){
    double sum = 0;
    string c;
    cin >> c;
    for (int i = 0; i < 12; i++){
        for (int j = 0; j < 12; j++){
            double temp;
            cin >> temp;
            if (j + i < 11){
                sum += temp;
            }
        }
    }
    if ( c == "S"){
        printf("%.1lf\n", sum);
    }else {
        printf("%.1lf\n", sum / 66);
    }


    return 0;
}
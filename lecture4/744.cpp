#include<bits/stdc++.h>

using namespace std;

int main(){
    int c;
    string letter;
    cin >> c >> letter;
    double sum = 0;
    for (int i = 0; i < 12; i++){
        for (int j = 0; j < 12; j++){
            double temp;
            cin >> temp;
            if (j == c){
                sum += temp;
            }
        }
    }
    if (letter == "S"){
        printf("%.1lf", sum);
    }else {
        printf("%.1lf", sum / 12);
    }

    return 0;
}
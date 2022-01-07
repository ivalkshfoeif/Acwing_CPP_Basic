#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        string p1, p2;
        cin >> p1 >> p2;
        if (p1 == "Bear" && p2 == "Hunter" || p1 == "Hunter" && p2 == "Gun" || p1 == "Gun" && p2 == "Bear" ){
            puts("Player1");
        }else if ( p1 == p2){
            puts("Tie");
        }else {
            puts("Player2");
        }
    }

        return 0;
}
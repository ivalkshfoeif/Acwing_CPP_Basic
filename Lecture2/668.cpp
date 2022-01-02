#include<bits/stdc++.h>

using namespace std;

int main(){

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int temp = (c - a) * 60 + d - b;
    if (temp <= 0){
        temp += 60 * 24;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", temp / 60, temp % 60);

    return 0;
}
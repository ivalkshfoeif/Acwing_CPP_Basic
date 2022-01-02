#include<iostream>
#include<cstdio>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    if (b <= a){
        b += 24;
    }
    printf("O JOGO DUROU %d HORA(S)", b - a);

    return 0;
}
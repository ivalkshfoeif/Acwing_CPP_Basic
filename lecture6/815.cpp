#include<bits/stdc++.h>

using namespace std;

void print(char str[]){

    for (int i = 0; str[i]; i++){
        cout << str[i];
    }
}

int main(){

    char str[100];

    cin.getline(str, 101);

    print(str);

    return 0;
}
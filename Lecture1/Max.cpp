#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int d = (a + b + abs(a - b)) / 2;
    printf("%d eh o maior", (c + d + abs(c - d)) / 2);
    return 0;
}
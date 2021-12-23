#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main(){
    double X1, X2, Y1, Y2;
    cin >> X1 >> Y1;
    cin >> X2 >> Y2;
    printf("%.4lf", sqrt((X1 - X2) * (X1 - X2) + (Y1 - Y2) * (Y1 - Y2)));

    return 0;
}
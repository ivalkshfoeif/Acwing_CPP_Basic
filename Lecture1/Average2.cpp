#include<iostream>
#include<cstdio>

using namespace std;

int main(){
    double A, B, C;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    printf("MEDIA = %.1lf", (A * 2 + B * 3 + C * 5) / 10.0);
    return 0;
}
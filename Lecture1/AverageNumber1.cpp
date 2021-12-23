#include<iostream>
#include<cstdio>

using namespace std;

int main(){
    double a, b;
    scanf("%lf", &a);
    scanf("%lf", &b);
    printf("MEDIA = %.5lf", (a * 3.5 + b * 7.5) / 11.0);

    return 0;
}